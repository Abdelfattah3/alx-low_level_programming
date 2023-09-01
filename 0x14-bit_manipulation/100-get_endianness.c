#include "main.h"
/**
* get_endianness - checks the endianness
* Return: 1 if big endian 0 if small endian
*/
int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
