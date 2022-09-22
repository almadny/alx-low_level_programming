#include "main.h"
#include <string.h>
/**
 * *_strncpy - Concatenates strings
 *
 * @dest: The string to be added to
 * @src: The string to be added
 * @n: Number
 * Description: Receives and add the src chars to the dest array
 * Return: Returns a pointer to the char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, d_len;

	i = d_len = 0;
	while (dest[i++])
		d_len++;

	for (i = 0; src[i] && index < n; i++)
	{
		dest[d_len++] = src[i];
	}

	return (dest);
}
