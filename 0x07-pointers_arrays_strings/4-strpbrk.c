#include "main.h"

/**
* _strpbrk - fills memory with constant byte
* @s: pointer
* @accept: constant
* Return: 0
*/


char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++
	}
	return (0);
}
