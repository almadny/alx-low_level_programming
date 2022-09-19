#include <stdio.h>
#include "main.h"
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int p;

	p = 380;
	printf("%d\n", p);
	reset_to_98(&p);
	printf("%d\n", p);
	return (0);
}
