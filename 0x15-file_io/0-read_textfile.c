#include "main.h"
/**
* read_textfile - reads a txt file
* @filename : pointer to the file name
* @letters : the size of bytes to be read
* Return: the number of bytes printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	size_t rb;
	ssize_t wb;
	int fd = open(filename, O_RDONLY);

	if (!filename || fd == -1)
	{
		return (0);
	}
	rb = read(fd, buffer, sizeof(buffer));
	if (rb > letters)
	{
		rb = letters;
		fd = write(STDOUT_FILENO, buffer, rb);
		if (fd == -1)
		{
			return (0);
		}
		wb = rb * 1;
		return (wb);
	}
	else
	{
		fd = write(STDOUT_FILENO, buffer, rb);
		if (fd == -1)
		{
			return (0);
		}
		wb = rb * 1;
		return (wb);
	}
	close(fd);
}
