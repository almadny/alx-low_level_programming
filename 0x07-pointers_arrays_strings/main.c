#include "main.h"
#include <stdio.h>
/*
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a[98] = "Hello ";
	char b[] = "World";
	char *ptr;

	*ptr = *_strcat(a, b);
	printf("%s\n", ptr);

	return (0);
}

