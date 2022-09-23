#include "main.h"
#include <string.h>
/**
 * *string_toupper - convert string to uppercase
 * @str: array to convert to uppercase
 * Description: Receives and add the src chars to the dest array
 * Return: Returns a pointer to the char
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
