#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: The number whose sign will be printed
 * Description: Function accepts n and prints its sign
 * Return: 1 if n is positive, -1 if n is negative
 * and 0 if n is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
