#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
	putchar(ch);
	ch--;
	}
	putchar('\n');
	return (0);
}
