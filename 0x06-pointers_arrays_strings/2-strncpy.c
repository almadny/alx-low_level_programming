#include "main.h"
#include <string.h>
/**
 * *_strncpy - Copies strings
 *
 * @dest: The string to be added to
 * @src: The string to be added
 * @n: Number
 * Description: Receives and add the src chars to the dest array
 * Return: Returns a pointer to the char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, s_len;

	i = s_len = 0;
	while (src[i++])
		s_len++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = s_len; i < n; i++)
		dest[index] = '\0';

	return (dest);
}
