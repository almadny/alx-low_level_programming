#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints multiplication table
 *
 * @n: tables to print
 * Description: Receives a number and calculates their tables
 * Return: Nothing;
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j < n)
					printf("%4d, ", i * j);
				else
					printf("%d\n", i * j);
			}
		}
	}
}
