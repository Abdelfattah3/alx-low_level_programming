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
	int n, i, m;
	int a[] = {25, 10, 5, 2, 1};

	m = 0;
	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 2 && atoi(argv[1]) > 0)
	{
		n = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			if (n >= a[i])
			{
			 m = m + (n / a[i]);
			 n = n % a[i];
			}
		}
	}
	printf("%d\n", m);
	return (0);
}
