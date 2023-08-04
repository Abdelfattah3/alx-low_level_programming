#include "main.h"
#include <stdlib.h>
/**
* main - prints a name
* @argc: int
* @argv: string
* Return: 0
*/

int main(int argc, char **argv)
{
	int i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	i = (atoi(argv[argc - 1]) * atoi(argv[argc - 2]));
	printf("%d\n", i);
	return (0);
}
