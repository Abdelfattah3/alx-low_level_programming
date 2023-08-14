#include "dog.h"
#include <stdlib.h>
/**
* new_dog - create a structure pointer
* @name : dog name
* @age : dog age
* @owner : dog owner
* Return: pointer to the new structure
*/
int _strlen(char *name)
{
	int length = 0;

	while (!*name)
	{
		length++;
		name++;
	}
	return (length);
}
char *copy(char *name)
{
	char *a;

	while (!*name)
	{
		*a++ = *name++;
	}
	*a = '\0';
	return (a);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;
	char *a;
	char *b;

	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}
	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
	{
		free(mydog);
		return (NULL);
	}
	a = malloc(sizeof(char) * (_strlen(name + 1)));
	if ( a == NULL)
	{
		free(a);
		return (NULL);
	}
	a = copy(name);
	b = malloc(sizeof(char) * (_strlen(owner + 1)));
	if ( b == NULL)
	{
		free(b);
		return (NULL);
	}
	b = copy(owner);
	(*mydog).name = name;
	(*mydog).age = age;
	(*mydog).owner = owner;
	return (mydog);
}
