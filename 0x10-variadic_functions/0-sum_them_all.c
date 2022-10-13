#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all int arrays
 * @n: number of arguments
 * description: uses vargs macros to add nunbers
 *
 * Return: sum of integers received or 0 for no integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	unsigned int sum;

	sum = 0;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}
	va_end(a);

	return (sum);
}
