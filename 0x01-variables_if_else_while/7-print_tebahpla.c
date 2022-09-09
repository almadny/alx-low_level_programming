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

	for (c = 122; c >= 97; --c)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
