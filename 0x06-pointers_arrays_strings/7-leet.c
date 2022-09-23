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
	int i, j;

	i = 0;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] ||
			    s[i] - 32 == leet[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
