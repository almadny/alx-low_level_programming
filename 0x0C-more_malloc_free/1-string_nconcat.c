#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates strings
 * @s1: array s1 strings
 * @s2: array s2 strings
 * @n: characters to concatenate
 *
 * Return: pointer to concatened string or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s2 = "";

	if (n >= strlen(s2))
	{
		p = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
		if (p)
		{
			while (*s1)
				*p++ =  *s1++;
			while (*s2)
				*p++ = *s2++;
			*p = '\0';
			return (p);
		}
		return (NULL);
	}
	p = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (p)
	{
		while (*s1)
		{
			*p++ = *s1++;
		}
		for (i = 0; i <= n; i++)
		{
		       *p++ = s2[i];
		}

		*p = '\0';
		return (p);
	}
	return (NULL);
}
