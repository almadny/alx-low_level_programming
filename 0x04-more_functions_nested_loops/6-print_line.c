#include "main.h"
/**
 * print_line - print lines
 *
 * @n: Number of lines to print
 * Return:void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
}
