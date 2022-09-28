#include "main.h"
#include <string.h>
/**
 * _puts_recursion - Prints strings using recursion
 * @s: String to print
 * Description: Uses putchar and recursion to print character one by one
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (strlen(s) <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
