#include "main.h"
#include <stdlib.h>
int count2(char *str)
{
	int i = 0;

	while (*str != ' ')
	{
		i++;
		str++;
	}
	return (i);
}
int count(char *str)
{
	int i = 0;
        int  m = 0;
          while (str[i] != '\0')
          {
                 while (str[i] == ' ' || str[i + 1] == ' ')
                  {
                          i++;
                  }
                  if (str[i + 1] == '\0')
                          break;
                  m++;
                  if (str[i - 1] != ' ' && str[i + 1] != ' ')
                  {
                          m--;
                  }
                  i++;
         } 
	  return (m);
}
/**
* strtow - creates an array
* @str : string
* Return: array of pointers
*/
char **strtow(char *str)
{
	char **a;
	int  j, l, k;

	j = 0;
	l = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	a = malloc((count(str) + 1) * sizeof(char *));
	if (a == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		while (*str == ' ')
		{
			str++;
		}
		if (*str == '\0')
		{
			break;
		}
		a[j] = malloc((count2(str) + 1) * sizeof(char));
		if (a[j] == NULL)
		{
			for (k = 0; k < j; k++)
			{
				free(a[k]);
			}
			free(a);
			return NULL;
		}
		l = 0;
		if (*str != ' ' && *str != '\0')
		{
			a[j][l] = *str;
			l++;
			str++;
		}
		a[j][l] = '\0';
		j++;
	}
	a[j] = NULL;
	return (a);
}
