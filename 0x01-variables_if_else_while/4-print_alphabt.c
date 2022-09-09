#include <stdio.h>

/**
 * main - Entry point
 *
 * c: An integer that represents the lowercase a in ASCII
 *
 * Description:The program prints lowercase letters a-z without q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; ++c)
	{
		if (c == 101 || c == 113)
			continue;
		putchar(c);
	}

	putchar('\n');
	return (0);
}
