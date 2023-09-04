#include "main.h"
/**
* append_text_to_file - appends text to file
* @filename : pointer to the file name
* @text_content : pointer to the file text
* Return: 1 on success -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int re, fd;
	struct stat buffer;

	if (!filename)
	{
		return (-1);
	}
	if (stat(filename, &buffer) == 0)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
	}
	else
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	re = write(fd, text_content, strlen(text_content));
	if (re == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
