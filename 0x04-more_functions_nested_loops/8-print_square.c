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

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
