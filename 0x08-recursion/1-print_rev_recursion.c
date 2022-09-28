#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - Prints strings using recursion
 * @s: String to print
 * Description:recursion to print character one by one in reverse
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
