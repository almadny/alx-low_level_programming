#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints dog info
 * @d: dog pointer
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
