#include "main.h"
#include <stdlib.h>

/**
* stt - calculate the string length
* @s : string
* Return: int
*/
int stt(char *s)
{
	int i = 1;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
* _strdup - creates an array
* @str : string
* Return: pointer
*/
char *_strdup(char *str)
{
	int j = stt(str);
	int i;
	char *a;

	a = malloc(j * sizeof(char));
	if (a == 0 || *str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= j; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
