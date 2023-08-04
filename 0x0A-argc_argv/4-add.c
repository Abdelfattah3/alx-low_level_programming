#include "main.h"
#include <stdlib.h>
#include "string.h"
/**
* main - prints a name
* @argc: int
* @argv: string
* Return: 0
*/

int main(int argc, char **argv)
{
	int i;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		n = n + atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}
