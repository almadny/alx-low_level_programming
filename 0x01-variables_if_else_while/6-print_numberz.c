#include <stdio.h>

/**
 * main - Entry point
 *
 * n: Number starting from zero
 *
 * Description: A Program that prints numbers 0-9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
