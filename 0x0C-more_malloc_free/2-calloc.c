#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - allocates memory dynamically
 * @nmemb: number of elements
 * @size: size of elements in bytes
 *
 * Return: pointer of or NULL  if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *f;

	if (nmemb || size)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	f = p;
	for (i = 0; i < (nmemb * size); i++)
	{
		f[i] = '\0';
	}

	return (p);
}
