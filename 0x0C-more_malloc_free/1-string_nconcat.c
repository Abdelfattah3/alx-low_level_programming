#include "main.h"
#include <stdlib.h>
#include "string.h"
/**
* string_nconcat - combines two string together
* @s1 : string 1
* @s2 : string 2
* @n : unsigned int
* Return: pointer to a string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a, *b;
	unsigned int i, j, m;

	i = strlen(s1);
	j = strlen(s2);
	m = 0;
	if (n >= j)
	{
		a = malloc((i + j + 1) * sizeof(char));
	}
	else
	{
		a = malloc((i + n + 1) * sizeof(char));
	}
	if (a == NULL)
	{
		return (NULL);
	}
	b = a;
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		*a++ = *s1++;
	}
	if (s2 != NULL)
	{
		while (n >= j && *s2 != '\0')
		{
			*a++ = *s2++;
		}
		while (j > n && m < n)
		{
			*a++ = s2[m];
			m++;
		}
	}
	*a = '\0';
	return (b);
}
