#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenate string
 * @s1: first string
 * @s2: second string
 *
 * Description: Concatenates string using dynamic allocat
 * Return: NULL or pointer if successful
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	char *q;
	char *s;
	unsigned int index1, index2, cont_index;

	index1 = 0;
	index2 = 0;
	cont_index = 0;

	q = strdup(s1);
	s = strdup(s2);
	p = (char *)malloc((strlen(q) + strlen(s) + 1) * sizeof(char));

	if (p != NULL)
	{
		while (q)
		{
			p[cont_index] = q[index1];
			cont_index++;
			index1++;
			q++;
		}

		while (s)
		{
			p[cont_index] = s[index2];
			cont_index++;
			index2++;
			s++;
		}

		return (p);
	}
	return (NULL);
}
