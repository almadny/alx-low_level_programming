#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - print strings
 * @format: argument format
 * description: uses vargs macros to print any data type
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list a;
	unsigned int i;
	int dval;
	char cval;
	char *sval;
	double fval;

	va_start(a, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				cval = (unsigned char)va_arg(a, int);
				printf("%c", cval);
				break;
			case 'i':
				dval = va_arg(a, int);
				printf("%d", dval);
				break;
			case 's':
				sval = va_arg(a, char *);
				if (sval == NULL)
					sval = "(nil)";
				printf("%s", sval);
				break;
			case 'f':
				fval = va_arg(a, double);
				printf("%f", fval);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(a);
}
