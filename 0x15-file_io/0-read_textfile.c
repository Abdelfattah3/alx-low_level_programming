#include "main.h"
/**
* read_textfile - reads a txt file
* @filename : pointer to the file name
* @letters : the size of bytes to be read
* Return: the number of bytes printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024 * 8];
	ssize_t wb;
	int fd;

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	wb = read(fd, &buffer[0], letters);
	wb = write(STDOUT_FILENO, &buffer[0], wb);
	close(fd);
	return (wb);
}
