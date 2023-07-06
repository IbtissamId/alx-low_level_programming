#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to unsigned int
 * @b: string
 * Return: the converted number
 */


unsigned int binary_to_uint(const char *b)
{
	int cpt;
	unsigned int v = 0;

	if (!b)
		return (0);

	for (cpt = 0; b[cpt]; cpt++)
	{
		if (b[cpt] < '0' || b[cpt] > '1')
			return (0);
		v = 2 * v + (b[cpt] - '0');
	}

	return (v);
}

