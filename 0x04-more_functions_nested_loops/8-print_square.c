#include "main.h"
/**
 * print_square - print squares
 *
 * @n: Number of lines to print
 * Return:void
 */
void print_square(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
			for (b = 0; b < n; b++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
