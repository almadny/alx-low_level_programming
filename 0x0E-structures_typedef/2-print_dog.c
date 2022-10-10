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
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
