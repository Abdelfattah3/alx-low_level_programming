#include <stdio.h>
#include "main.h"

/**
* isLower - Concatenates two strings
* @c: string 1
* Return: 1 if true 0 if false
*/



int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
* isDelimiter - determines ascii is a delimiter
* @c: character
* Return: 1 true 0 false
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"()()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
* cap_string - it caps string
* @s: string
* Return: 1 true 0 false
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit =1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -=32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
