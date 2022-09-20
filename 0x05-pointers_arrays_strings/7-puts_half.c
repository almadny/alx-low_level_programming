#include "main.h"
#include <unistd.h>
/**
 * puts_half - prints every other character of string
 * @str: String to manipulate
 *
 * Description: Prints every other character of string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, j;
	int len;
	char c;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = (len - 1) / 2; j <= len - 1; j += 2)
	{
		c = str[j];
		write(1, &c, 1);
	}
	_putchar('\n');
}
