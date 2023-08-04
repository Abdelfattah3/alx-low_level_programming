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
	unsigned int n = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] < 48 || *argv[i] > 57) && (*argv[i] != 45))
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) < 0)
		{
			*argv[i] = 0;
		}
		n = n + atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}
