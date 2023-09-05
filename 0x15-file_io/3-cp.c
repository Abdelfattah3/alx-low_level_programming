#include "main.h"
/**
* main - appends text to file
* @ac : number of arguments
* @av : pointer to the arguments passed
* Return: 1 on success -1 on failure
*/
int main(int ac, char *av[])
{
	int fd, ft;
	ssize_t by;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	ft = open(av[1], O_RDONLY);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((by = read(ft, buffer, sizeof(buffer))) > 0)
		if (by != write(fd, buffer, by))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	if (by == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	ft = close(ft);
	fd = close(fd);
	if (ft)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
	exit(100);
	if (fd)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	return (0);
}
