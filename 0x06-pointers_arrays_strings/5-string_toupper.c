#include <stdio.h>
#include "main.h"

/**
* string_toupper - Concatenates two strings
* @str: string 1
* Return: 1 if true 0 if false
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
