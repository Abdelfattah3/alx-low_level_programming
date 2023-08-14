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

	while (*n != '\0')
	{
		length++;
		n++;
	}
	return (length);
}
char *copy(char *m, char *name)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		m[i] = name[i];
	}
	m[i] = '\0';
	return (m);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
	{
		return (NULL);
	}
	mydog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (mydog->name == NULL)
	{
		free(mydog->name);
		return (NULL);
	}
	mydog->name =  copy(mydog->name, name);
	mydog->age = age;
	mydog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (mydog->owner == NULL)
	{
		free(mydog->owner);
		return (NULL);
	}
	mydog->owner = copy( mydog->owner, owner);
	return (mydog);
}
