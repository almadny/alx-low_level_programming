#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from a given number to 98
 *
 * @n: number to start print from
 *
 * Description: Prints from a given number to 98
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d,\n", n);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
