#include "main.h"
/**
* read_textfile - reads a txt file
* @filename : pointer to the file name
* @letters : the size of bytes to be read
* Return: the number of bytes printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r;
	int fd;
	char buff[1024 * 8];

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	r = read(fd, &buff[0], letters);
	r = write(STDOUT_FILENO, &buff[0], r);
	if (r < 0)
	{
		return (0);
	}
	close(fd);
	return (r);
}
