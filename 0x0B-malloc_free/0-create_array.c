#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array dynamically
 * @size: Elements of the array
 * @c: an array to copy
 *
 * Description: Checks and allocate an array
 * Return: NULL or pointernis successful
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *p;

	p = (char *)malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	else
		return (p);
}
