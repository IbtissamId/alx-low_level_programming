#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array to search integer
 * @size: size of array
 * @cmp: is a pointer to compare values
 * Return: 0
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		while (v < size)
		{
			if (cmp(array[v]))
				return (v);
			v++;
		}
	}
	return (-1);
}
