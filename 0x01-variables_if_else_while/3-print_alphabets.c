#include <stdio.h>
/**
 * main - entry point
 *
 * Decription: Alphabet Uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
		{
		putchar(ch);
		ch++;
		}
		while (CH <= 'Z')
		{
		putchar(CH);
		CH++;
		}
	return (0);
}
