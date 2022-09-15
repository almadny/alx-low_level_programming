#include "main.c"
#include <stdio.h>
/**
 * main - Main entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'A';

	printf("%c: %d", c, _isupper(c));
}
