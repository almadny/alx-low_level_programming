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
	int i, d_len, s_len;

	d_len = strlen(dest);
	s_len = strlen(src);
	for (i = 0; *src != '\0'; src++)
	{
		dest[d_len] = src[i];
	}
	if (src[i] == '\0')
	{
		dest[d_len + s_len] = '\0';
	}
	return (dest);
}
