#include "main.h"
/**
 * main - copy files
 * @ac: argc number of arguments
 * @av: argv the values of arguments
 * Return: 0 in success and form 97 to 100 in failure
 */
int main(int ac, char **av)
{
	char buf[1024];
	int fd1, fd2;
	struct stat st;
	ssize_t r;

	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	if (stat(av[1], &st) != 0)
	{
		printf("Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd1 = open(av[1], O_RDONLY);
	if (stat(av[2], &st) == 0)
		fd2 = open(av[2], O_WRONLY | O_TRUNC);
	else
		fd2 = open(av[2], O_WRONLY | O_CREAT, 0664);
	while ((r = read(fd1, buf, 1024)) > 0)
	{
		if (write(fd2, buf, r) < 0)
		{
			dprintf(fd2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(fd1) < 0)
	dprintf(fd1, "Error: Can't close fd %d\n", fd1);
	exit(100);
	if (close(fd2) < 0)
	dprintf(fd2, "Error: Can't close fd %d\n", fd2);
	exit(100);
	return (0);
}
