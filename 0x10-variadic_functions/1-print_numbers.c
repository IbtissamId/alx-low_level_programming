#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - a function that prints numbers
 * @n: is the number of integers passed to the function
 * @separator: is the string to be printed between numbers
 * Return: 0
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;

	va_start(a, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
