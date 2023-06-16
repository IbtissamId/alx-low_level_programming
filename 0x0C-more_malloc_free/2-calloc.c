#include "main.h"


/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: allocate memory for array
 * @size: allocate element of size byte
 * Return: pointer / NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < (nmemb * size); c++)
	{
		a[c] = 0;
	}
	return (a);
}
