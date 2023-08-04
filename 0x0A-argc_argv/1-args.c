#include "main.h"
#include <stdlib.h>
/**
* main - prints a name
* @argc: int
* @argv: string
* Return: 0
*/

int main(int argc, __attribute__((unused))char **argv)
{
	int n = argc - 1;
	printf("%d\n", n);
	return (0);
}
