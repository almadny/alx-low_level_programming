#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints times table
 * n: Number to multiple
 * m: Number to multiple with
 * Description: Prints a multiplication table
 * Return: Nothing;
 */
void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			p = n * m;
			if (m < 9)
			{
				if (p < 10)
				{
					_putchar(' ');
					_putchar(p + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (p < 10)
				{
					_putchar(' ');
					_putchar(p + '0');
				}
				else
				{
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				_putchar('\n');
			}
		}
	}
}
