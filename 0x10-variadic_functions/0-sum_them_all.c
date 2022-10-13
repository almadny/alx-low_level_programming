#include <stdio>
#include <stdarg.h>
/**
 * sum_them_all: sum all int arrays
 * @n: number of arguments
 *
 * Return: sum of integers received or 0 for no integer
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}
	va_end(a);

	return (sum);
}
