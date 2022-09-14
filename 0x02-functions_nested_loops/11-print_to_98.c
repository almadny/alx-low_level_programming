#include "main.h"

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
		for (n = n; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
}
