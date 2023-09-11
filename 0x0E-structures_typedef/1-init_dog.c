#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct pointer
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	strcpy(d->name, name);
	d->age = age;	
	strcpy(d->owner, owner);
}
