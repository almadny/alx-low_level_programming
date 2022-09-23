#include "main.h"
#include <string.h>
/**
 * *cap_string - reverse arrays
 *
 * @str: The string to be added to
 * Description: Receives and add the src chars to the dest array
 * Return: Returns a pointer to the char
 */

char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' ||
		    str[i - 1] == '\t' ||
		    str[i - 1] == '\n' ||
		    str[i - 1] == ',' ||
		    str[i - 1] == '.' ||
		    str[i - 1] == '!' ||
		    str[i - 1] == '?' ||
		    str[i - 1] == '"' ||
		    str[i - 1] == '(' ||
		    str[i - 1] == ')' ||
		    str[i - 1] == '{' ||
		    str[i - 1] == '}' ||
		    i == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
