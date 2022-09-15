#include "main.h"
/**
 * print_numbers - print numbers 0 to 9
 *
 * Description: loop through 0 to 9
 *
 * Return: none
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
