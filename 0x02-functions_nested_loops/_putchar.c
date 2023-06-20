#include "main.h"
#include <unistd.h>

/**
* main - entry point
*
*Description: prints
*
*@c : the character to print
*Return: 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
