#include "main.h"

/**
 * print_binary - a function that prints the binary of a number
 * @n: number to convert in binary
 */


void print_binary(unsigned long int n)
{
	int l, cpt = 0;
	unsigned long int acc;

	for (l = 63; l >= 0; l--)
	{
		acc = n >> l;

		if (acc & 1)
		{
			_putchar('1');
			cpt++;
		}
		else if (cpt)
			_putchar('0');
	}
	if (!cpt)
		_putchar('0');
}

