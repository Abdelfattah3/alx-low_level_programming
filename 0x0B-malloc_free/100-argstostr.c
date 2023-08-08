#include "main.h"
#include <stdlib.h>

/**
* stt - calculate the string length
* @s : string
* Return: int
*/
int stt(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
* argstostr - creates an array
* @ac : int argument number
* @av : double pointer to a string
* Return: pointer
*/
char *argstostr(int ac, char **av)
{
	int j, i;
	char *a;
	char *b;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; i < ac; i++)
	{
		j = j + stt(av[i]);
	}
	a = malloc((j + 1 + ac) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	b = a;
	while (**av != '\0')
	{
		*a++ = **av++;
		*a = '\n';
	}
	*a = '\n';
	*a = '\0';
	return (b);
}
