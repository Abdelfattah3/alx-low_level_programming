#include "3-calc.h"
/**
* main - do operations
* @argc : int
* @argv : string
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int c;
	int (*opp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	opp = get_op_func(argv[2]);
	if (opp == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = opp(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", c);
	return (0);
}
