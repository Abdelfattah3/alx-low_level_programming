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
	dog_t dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog.name = name;
	dog.age = age;
	dog.owner = owner;
	mydog = &dog;
	return (mydog);
}
