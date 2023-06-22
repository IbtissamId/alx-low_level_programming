#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: number of params
 * Return: 0
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list a;

	va_start(a, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		s += va_arg(a, int);
	va_end(a);
	return (s);
}
