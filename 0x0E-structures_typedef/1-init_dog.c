#include "dog.h"

/**
* init_dog - initalize the structure
* @d : pointer to the struct dog
* @age : dog age
* @name : dog name
* @owner : dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	 (*d).name = name;
	 (*d).age = age;
	 (*d).owner = owner;
}
