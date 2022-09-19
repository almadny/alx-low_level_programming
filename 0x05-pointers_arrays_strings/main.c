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
	int q;

	p = 380;
	q = 830;

	printf("p = %d : q = %d\n", p, q);
	swap_int(&p, &q);
	printf("p = %d : q = %d\n", p, q);
	return (0);
}
