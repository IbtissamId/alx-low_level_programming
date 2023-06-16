#include "main.h"
#include <stdlib.h>



/**
 * array_range - a function that creates an array of integers
 * @min: min range
 * @max: max range
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, a;

	if (min > max)
		return (NULL);


	a = max - min + 1;


	p = malloc(sizeof(int) * a);

	if (p == NULL)
		return (NULL);


	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
