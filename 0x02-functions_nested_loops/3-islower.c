#include <ctype.h>

/**
 * _islower - Checks it a character is lower case
 *
 * @c: c is the character to be checked
 * Description: The function checks if a character is lowercase.
 *
 * Return: 1 if the character is lowercase and 0 if it is not
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
