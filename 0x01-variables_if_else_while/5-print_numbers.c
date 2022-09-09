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

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	printf("\n");

	return (0);
}
