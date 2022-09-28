#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - Prints strings using recursion
 * @s: String to print
 * Description:recursion to print character one by one in reverse
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
	_putchar('\n');
}
