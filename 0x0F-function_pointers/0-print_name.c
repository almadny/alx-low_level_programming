#include "function_pointers.h"
/**
 * print_name - calls name to print the name sent
 * @name: Name to be printed
 * @f: points to a function with a one arg.
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
