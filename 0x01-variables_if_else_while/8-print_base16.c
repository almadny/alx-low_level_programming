#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print hexadecimal number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int c;

	for (a = '0'; a <= '9'; ++a)
	{
		putchar(a);
	}
	for (c = 'a'; c <= 'f'; ++c)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
