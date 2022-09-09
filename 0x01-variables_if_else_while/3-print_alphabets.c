#include <stdio.h>

/**
 * main - Entry point
 *
 * c: An integer that represents the lowercase a in ASCII
 *
 * Description:The program prints lowercase letters a-z
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; ++c)
	{
		putchar(c);
	}
	for (c = 65; c <= 90; ++c)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
