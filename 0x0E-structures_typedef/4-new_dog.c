#include "dog.h"
#include <stdlib.h>
/**
* new_dog - create a structure pointer
* @name : dog name
* @age : dog age
* @owner : dog owner
* Return: pointer to the new structure
*/
int _strlen(char *n)
{
	int length = 0;

	while (!*n)
	{
		length++;
		n++;
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
	mydog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (mydog->name == NULL)
	{
		free(mydog->name);
		return (NULL);
	}
	mydog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (mydog->owner == NULL)
	{
		free(mydog->owner);
		return (NULL);
	}
	(*mydog).name = copy(name);
	(*mydog).age = age;
	(*mydog).owner = copy(owner);
	return (mydog);
}
