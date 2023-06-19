#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints decimal numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		putchar (a + '0');
	}
	putchar ('\n');
	return (0);
}
