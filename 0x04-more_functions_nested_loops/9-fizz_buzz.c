#include "main.h"
#include <stdio.h>
/**
 * main - Prints fizzbuzz
 *
 * Description: Prints 1 to 100 and fizzbuzz
 * Return : Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("Fizz Buzz");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");

	return (0);
}

