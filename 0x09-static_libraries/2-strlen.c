#include "main.h"

/**
* _strlen - swaps the values of two integers
*
* @s: input paramter
*
* Return: nothing
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
