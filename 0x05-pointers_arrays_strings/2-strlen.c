#include "main.h"
/**
 * _strlen - find the length of a string
 * @s: The string to find the length
 *
 * Description: Gets the number of elemnt in a string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);

}
