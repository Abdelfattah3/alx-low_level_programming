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

	for (i = 0;i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
