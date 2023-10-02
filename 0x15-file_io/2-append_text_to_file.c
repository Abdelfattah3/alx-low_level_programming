#include "main.h"
/**
* append_text_to_file - appends to a new file
* @filename : pointer to the file name
* @text_content : pointer to the file text
* Return: 1 on success -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t r;
	int fd;
	struct stat st;

	if (!filename)
	{
		return (-1);
	}
	if (stat(filename, &st) == 0)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
	}
	else
	{
		return (-1);
	}
	if (fd < 0)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (1);
	}
	r = write(fd, text_content, strlen(text_content));
	if (r < 0)
	{
		return (-1);
	}
	return (1);
}
