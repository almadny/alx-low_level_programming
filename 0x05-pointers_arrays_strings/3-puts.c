#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string to stdout
 * @str: The string to output to the stdout
 *
 * Description: print a string str to the stdout
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}
