#include "main.h"
/**
 * print_line - print lines
 *
 * @n: Number of lines to print
 * Return:void
 */
void print_line(int n)
{
	int a, b;

	for (a = 0; a < 1; a++)
	{
		if (n > 0)
		{
			for (b = 0; b < n; b++)
			{
				_putchar('_');
			}
		}
		_putchar('\n');
	}
}
