#include "main.h"
#include <string.h>
/**
 * *_strcat - Concatenates strings
 *
 * @dest: The string to be added to
 * @src: The string to be added
 *
 * Description: Receives and add the src chars to the dest array
 * Return: Returns a pointer to the char
 */
char *_strcat(char *dest, char *src)
{
	int i, d_len;

	d_len = 0;
	while (dest[i++])
		d_len++;

	for (i = 0; src[i]; i++)
	{
		dest[d_len++] = src[i];
	}

	return (dest);
}
