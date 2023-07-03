#include "main.h"

/**
* _strstr - fills memory with constant byte
* @haystack: pointer
* @needle: constant
* Return: pointer s
*/


char *_strstr(char *haystack, char *needle)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}
	return (itr);
}
