#include "main.h"
/**
 * print_numbers - print numbers 0 to 9 without 2 and 4
 *
 * Return:void
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 && a == 52)
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
