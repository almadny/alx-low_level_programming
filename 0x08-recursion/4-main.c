#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 **/

int main(void)
{
	printf("2 to the power of 3 is %d\n",_pow_recursion(2,3));
	printf("2 to the power of 0 is %d\n",_pow_recursion(2,0));
	printf("2 to the power of -2 is %d\n",_pow_recursion(2,-2));
	return (0);
}
