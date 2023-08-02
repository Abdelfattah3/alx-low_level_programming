#include "main.h"

int is_palindrome(char *s);
int check(char *s, int n);
/**
* length - checks for the length
* @s : string
* Return: int
*/
int length(char *s)
{
	if (*s == '\0')
{
	return (0);
}
	else
{
	return (1 + length(s + 1));
}
}
/**
* check - checks for the length
* @s : string
* @n : number
* Return: int
*/
int check(char *s, int n)
{
	if (n <= 1)
	return (1);
	if (*s == (s[n - 1]))
	return (check(s + 1, n - 2));
	else
	return (0);
}
/**
* is_palindrome - checks for string
* @s : string
* Return: int
*/
int is_palindrome(char *s)
{
	int len = length(s);

	return (check(s, len));
}
