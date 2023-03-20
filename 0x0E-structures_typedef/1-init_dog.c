#include <stdio.h>
#include "dog.h"

/**
 * init_dog - fuction that intialize the struct dog
 * variable
 * @d: dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owners name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
