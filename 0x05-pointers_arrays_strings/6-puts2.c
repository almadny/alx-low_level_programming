#include "main.h"
#include <unistd.h>
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
	char c;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = 0; j <= len - 1; j += 2)
	{
		c = s[j];
		write(1, &c, 1);
	}
	_putchar('\n');
}
