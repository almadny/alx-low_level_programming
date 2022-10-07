#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory dynamically
 * @b: number of elements
 *
 * Return: pointer of 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b * sizeof(char));
	if (p)
		return (p);
	exit(98);
}
