#include "main.h"
#include <stdlib.h>
#include "string.h"
/**
* ischar - checks for the string
* @s : string
* main - prints a name
* Return: 0
*/
int ischar(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			return (1);
		}
		s++;
	}
	return (0);
}
/**
* main - adds numbers
* @argc: int
* @argv: string
* Return: number
*/
int main(int argc, char **argv)
{
	int i;
	int n = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (ischar(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				n = n + atoi(argv[i]);
			}
		}
	}
	printf("%d\n", n);
	return (0);
}
