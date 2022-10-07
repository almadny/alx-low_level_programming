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

	while (min++ < max)
		len++;

	p = malloc(sizeof(int) * len);

	if (p)
	{	for (i = 0; i < max; i++)
			p[i] = min + i;
		return (p);
	}
	return (NULL);
}
