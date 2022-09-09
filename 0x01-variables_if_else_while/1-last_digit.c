#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * n: the number to be checked
 * ld: The remainder (The last digit in this case)
 * Description: The program
 * Generates a random number
 * Divide the number by 10 to get the remainder (the last digit)
 * Stores the last digit in ld
 * If the last digit is greater than 5
 * prints Last digit of number is the number and is greater than 5
 * If the Last digit is is zero
 * Prints
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, ld);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
