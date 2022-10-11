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
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s", d->name);
		if (d->age < 0)
			printf("Age: (nil)\n", d->age);
		else
			printf("Age: %.6f\n");
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
