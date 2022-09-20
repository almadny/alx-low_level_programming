#include "main.h"
/**
 * puts2 - prints every other character of string
 * @s: String to manipulate
 *
 * Description: Prints every other character of string
 * Return: Nothing
 */
void puts2(char *s)
{
	int i, j;
	int len;

	len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = 0; j <= len; j += 2)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
