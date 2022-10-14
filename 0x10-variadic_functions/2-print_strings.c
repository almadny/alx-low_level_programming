#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: character to seperate numbers
 * @n: number of arguments
 * description: uses vargs macros to print strings
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *p;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(a, char *);
		if (p == NULL)
			p = "(nil)";

		printf("%s", p);

		if ((n - i != 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
