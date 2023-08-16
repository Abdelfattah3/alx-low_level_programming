#include "3-calc.h"
#include <stdlib.h>
/**
* main - do operations
* @argc : int
* @argv : string
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int a, b;
	int (*opp)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	opp = get_op_func(argv[2]);
	if (opp == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", opp(a, b));
	return (0);
}
