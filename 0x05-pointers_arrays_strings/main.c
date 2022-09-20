#include <stdio.h>
#include "main.h"
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *str;

	str = "I do not fear computers, i fear the lack of it - Isaac Asimov";
	rev_string(str);
	printf("%s", str);
	return (0);
}
