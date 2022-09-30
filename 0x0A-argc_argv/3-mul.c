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
	int p;

	if (argc > 2)
	{
		p = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", p);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
