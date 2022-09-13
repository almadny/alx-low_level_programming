#include <ctype.h>

/**
 * _isalpha - Checks if a character is an alphabet
 *
 * @c: c is the character to be checked
 * Description: The function checks if a character is lowercase.
 *
 * Return: 1 if the character is alphabet and 0 if it is not
 */
int _isalpha(int c)
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
