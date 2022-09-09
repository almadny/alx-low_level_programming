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
	char a;
	char b;

	for (a = '0'; a <= '9'; ++a)
	{
		for (b = '0'; b <= '9'; ++b)
		{
			putchar(a);
			putchar(b);
			putchar(', ');
		}
	}

	putchar('\n');
	return (0);
}
