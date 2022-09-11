#include <stdio.h>

/**
 * main - Entry point
 *
 * a: first digit
 * b: second digit
 * c: comma ascii code
 * s: space ascii code
 *
 * Description: The program prints all combinations of 2 digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	char b;
	int c;
	int s;

	c = 44;
	s = 32;

	for (a = '0'; a < 10; ++a)
	{
		for (b = '0'; b < 10; ++b)
		{
			if (a != b)
				putchar(a);
				putchar(b);
				putchar(c);
				putchar(s);
		}
	}

	putchar('\n');
	return (0);
}
