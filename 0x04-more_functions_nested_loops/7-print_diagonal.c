#include "main.h"

/**
 * print_diagonal - print lines in diagonal
 *
 * @n: Number of lines and rows to print
 *
 * Description: Prints a diagonal line with a pattern
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int row, col, space;

	if (n > 0)
	{
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row - 1; col++)
			{
				_putchar(' ');
			}
			for (space = 1; space <= 1; space++)
			{
				_putchar(92);
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
