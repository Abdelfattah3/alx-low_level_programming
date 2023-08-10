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
	int n;

	if (argc == 3)
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
