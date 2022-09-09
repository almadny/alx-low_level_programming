#include <stdio.h>

/**
 * main - Entry point
 *
 * a: First characterr to represent first digit
 * b: Second character to represent second character
 *
 * Description: Program that prints all combinations of single digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	c = 44;

	for (a = 48; a <= 57; ++a)
	{
		for (b = 48; b <= 57; ++b)
		{
			putchar(a);
			putchar(b);
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}
