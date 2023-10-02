#include "main.h"
/**
 * main - copy files
 * @ac: argc number of arguments
 * @av: argv the values of arguments
 * Return: 0 in success and form 97 to 100 in failure
 */
int main(int ac, char **av)
{
	struct stat st;
	char buf[1024];
	int fd1, fd2;
	ssize_t r;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (stat(av[2], &st) == 0)
		fd2 = open(av[2], O_WRONLY | O_TRUNC);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", av[2]), exit(99);
	while ((r = read(fd1, buf, 1024)) != 0)
	{
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (write(fd2, buf, r) == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (close(fd1) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
	exit(100);
	}
	if (close(fd2) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
	exit(100);
	}
	return (0);
}
