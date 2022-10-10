#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a dog
 * @d: pointer variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
