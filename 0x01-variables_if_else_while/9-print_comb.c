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
	int c;
	int s;

	c = 44;
	s = 32;

	for (a = 48; a <= 57; ++a)
	{
		putchar(a);

		if (a != 57)
		{
			putchar(c);
			putchar(s);
		}
	}
	putchar('\n');
	return (0);
}
