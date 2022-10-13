#include <stdio.h>
/**
 * print_name - prints ones name
 * @s: Named to be printed
 *
 * Return: Nothing
 */

void print_name(char *s)
{
	printf("Hello, my name is %s\n", s);
}

/**
 * p_name - calls name to print the name sent
 * @name: Name to be printed
 * @f: points to a function with a one arg.
 *
 * Return: Nothing
 */

void p_name(char *name, void (*f)(char *))
{
	f(name);
}
