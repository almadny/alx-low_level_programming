#include "main.h"
#include <string.h>
/**
 * strcmp - Compares strings
 *
 * @s1: The string to be added to
 * @s2: The string to be added
 * 
 * Description: Receives and add the src chars to the dest array
 * Return: Returns a pointer to the char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
