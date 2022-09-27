#include "main.h"
/**
 * _strchr - fills memory with a constant byte
 * @s: Array
 * @c: Bytes
 *
 * Description: Changes the 0 to n chars to the char b
 * Return: Pointer to the memory area
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
