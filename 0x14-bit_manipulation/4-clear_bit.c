#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0
 * @n: pointer to the number to set
 * @index: index of the bit you want to set
 * Return: 1 (worked), -1 (error)
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

