#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks if a letter is uppercase
 *
 * @c: The letter supplied for checking
 *
 * Description:  The function uses the standard library fuction to check
 *
 * Return: Returns the integer
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
