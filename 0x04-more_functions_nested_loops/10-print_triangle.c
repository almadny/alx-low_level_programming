#include "main.h"

/**
 * print_triangle - print lines in diagonal
 *
 * @n: Number of lines and rows to print
 *
 * Description: Prints a diagonal line with a pattern
 * Return: Nothing
 */
void print_triangle(int n)
{
	int row, col, space;

	if (n > 0)
	{
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= n - a; col++)
			{
				_putchar(' ');
			}
			for (space = 1; space <= a; space++)
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
