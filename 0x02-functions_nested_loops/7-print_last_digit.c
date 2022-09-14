#include <ctype.h>
/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: The number that will be received
 *
 * Description: The function receives a number and
 * prints the last digit of the number
 *
 * Return: The last digit og the number
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		l *= -1;

	_putchar(l + '0');
	return (l);
}
