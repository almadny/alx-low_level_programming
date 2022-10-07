#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - allocates memory dynamically
 * @min: starting point
 * @max: ending point
 *
 * Return: pointer of result or NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int len;
	int i;

	len = 0;
	if (min > max)
		return (NULL);

	while (min++ <= max)
		len++;

	p = malloc(len * sizeof(int));

	if (p == NULL)
		return (NULL);
	
	for (i = 0; i < len; i++)
		p[i] = min++;

	return (p);
}
