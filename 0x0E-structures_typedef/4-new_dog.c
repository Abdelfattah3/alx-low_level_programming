#include "dog.h"
#include <stdlib.h>
#include "string.h"
/**
* new_dog - create a structure pointer
* @name : dog name
* @age : dog age
* @owner : dog owner
* Return: pointer to the new structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;
	char *a;
	char *b;

	b = malloc(sizeof(char) * strlen(owner));
	a = malloc(sizeof(char) * strlen(name));
	strncpy(a, name, strlen(name));
	strncpy(b, owner, strlen(owner));
	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
	{
		return (NULL);
	}
	if (name == NULL || owner == NULL)
	{
		name = "";
		owner = "";
	}
	(*mydog).name = name;
	(*mydog).age = age;
	(*mydog).owner = owner;
	return (mydog);
}
