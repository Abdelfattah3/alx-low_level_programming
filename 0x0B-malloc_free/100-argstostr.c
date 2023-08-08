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
	int j, i, m, k;
	char *a;
	char *b;

	m = 0;
	k = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; i < ac; i++)
	{
		j = j + stt(av[i]);
	}
	a = malloc((j + ac  + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
		free(a);
	}
	b = a;
	for (k = 0; k < ac; k++)
	{
		for (m = 0; m < (stt(av[k])); m++)
		{
			*a = av[k][m];
			a++;
		}
		*a = '\n';
		a++;
	}
	*a = '\0';
	return (b);
}
