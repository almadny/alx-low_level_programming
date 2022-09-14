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
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			printf("%d, ", n * m);
		}
		printf("\n");
	}
}

