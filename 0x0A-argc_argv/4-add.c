#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 *
 * Return: success (0)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);

	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
