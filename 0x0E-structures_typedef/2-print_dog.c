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
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
