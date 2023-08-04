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
	int i, n;

	n = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
	n = atoi(argv[i]) * n;
	}
	printf("%d\n", n);
	return (0);
}
