#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: character to seperate numbers
 * @n: number of arguments
 * description: uses vargs macros to print nunbers
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", (va_arg(a, int)));

		if ((n - i != 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
