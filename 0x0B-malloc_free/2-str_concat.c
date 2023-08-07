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

	if (s == NULL)
	{
		return (1);
	}
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
* str_concat - creates an array
* @s1 : string 1
* @s2 : string 2
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int j = stt(s1) + stt(s2);
	char *a;
	char *b;

	a = malloc((j + 1) * sizeof(char));
	if (a == 0)
	{
		return (NULL);
	}
	b = a;

	while (*s1 != '\0')
	{
		*a++ = *s1++;
	}
	while (*s2 != '\0')
	{
		*a++ = *s2++;
	}
	*a = '\0';
	return (b);
}
