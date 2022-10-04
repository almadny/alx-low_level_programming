#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - create array dynamically
 * @str: pointer to string to be copied
 *
 * Description: duplicates an array
 * Return: NULL or pointern if successful
 */
char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
		return (NULL);

	p = (char *)malloc(sizeof(char));
	if (p != NULL)
	{
		strcpy(p, str);
		return (p);
	}

	return (NULL);
}
