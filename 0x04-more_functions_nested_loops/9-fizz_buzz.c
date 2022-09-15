#include "main.h"
/**
 * fizzbuzz - Prints fizzbuzz
 *
 * Description: Prints 1 to 100 and fizzbuzz
 * Return : void
 */
int fizzbuzz(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (a % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z')
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			_putchar(a);
		}
	}
}

