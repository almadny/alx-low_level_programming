#include "main.h"
#include <unistd.h>
/**
 * print_rev - Print a string in reverse
 * @s: string to be reversed
 * Description: Print a string in reverse
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i, j;
	char c;
	int len;

	len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (j = len; i >= 0; i--)
	{
		c = s[i];
		write(1, &c, 1);
		i++;
	}
	_putchar('\n');
}
