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
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
	{
		p = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
		if (p)
		{
			for (i = 0; i < strlen(s1); i++)
			{

				p[i] = s1[i];
			}
			for (j = 0; i < strlen(s2); j++, i++)
			{
				p[i] = s2[j];
			}
			p[i] = '\0';
			return (p);
		}
		return (NULL);
	}

	p = (char *)malloc((strlen(s1) + n + 1) * sizeof(char));
	if (p)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; j < n; j++, i++)
		{
		       p[i] = s2[j];
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
