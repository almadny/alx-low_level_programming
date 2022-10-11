#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - initializes a dog
 * @d: pointer variable
 *
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
