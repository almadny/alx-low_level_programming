#include "main.h"
#include <string.h>
/**
 * *leet - reverse arrays
 *
 * @s: The string to be added t
 * Description: Receives and add the src chars to the dest array
 * Return: Returns a pointer to the char
 */
char *leet(char *s)
{
	int i, i2;

	i = 0;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (s[i] == leet[i2] ||
			    s[i] - 32 == leet[i2])
				s[i] = i2 + '0';
		}
		i++
	}
	return (s);
}
