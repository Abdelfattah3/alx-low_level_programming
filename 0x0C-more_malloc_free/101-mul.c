#include "main.h"
#include <stdlib.h>
#include <ctype.h>
int *nub(int num)
{
	if (num < 10)
		return (num);
	else (nub(num / 10));
	nub(num 
int numlen (int num)
{
	if (num < 10)
	{
		return (1);
	}
	return (1 + numlen(num % 10));
}
int **pointer(char **argv)
{
	int i, j, n, k;
	int **l;
	int **m;

	j = 0;
	k = 0;
	n = atoi(argv[1]) * atoi(argv[2]);
	m = malloc(numlen(n) * sizeof(int *));
	l = m;
	for (i = 0 ; i < numlen(n); i++)
	{
		l[i][k] = n;
	}
			while (j < numlen(n))
			{
			m[j][j] = l[j][j];
			j++;
			}
	return (m);
}	
int issdigit(char *s)
{
	if (*s < 48 || *s > 58)
		return (1);
	else
		return (0);
}
/**
* main - prints a name
* @argc: int
* @argv: string
* Return: 0
*/
int main(int argc, char **argv)
{
	unsigned int n;
	int i, l, k;
	int **j;
	char *a = "Error";

	k = 0;
	for (i = 1; i < argc; i++)
	{
		l = issdigit(argv[i]);
		if (l == 1)
		{
			while (*a != '\0')
			{
				_putchar(*a);
				a++;
			}
			_putchar('\n');
			exit(98);
		}
	}
	if (argc == 3)
	{
		n =  atoi(argv[1]) * atoi(argv[2]);
		j = pointer(argv);
		while (k < numlen(n))
		{
			_putchar((**j + 48));
			j++;
			k++;
		}
		_putchar('\n');
	}
	else
	{
		while (*a != '\0')
		{
			_putchar(*a);
			a++;
		}
		_putchar('\n');
		exit(98);
	}
	return (0);
}
