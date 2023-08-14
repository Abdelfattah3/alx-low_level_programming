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
	char *m;
	char *b;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
	{
		return (NULL);
	}
	m = malloc(sizeof(char) * (_strlen(name) + 1));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	m = copy(m, name);
	mydog->name =  name;
	mydog->age = age;
	b = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (b == NULL)
	{
		free(b);
		return (NULL);
	}
	b = copy(b, owner);
	mydog->owner = owner;
	return (mydog);
}
