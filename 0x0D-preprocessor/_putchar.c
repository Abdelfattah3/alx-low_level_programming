#include <unistd.h>
#include "main.h"
/**
* _putchar - writes the character
* @c: the character to print
*
* Return: on success 1.
* on error, -1 on return.
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
