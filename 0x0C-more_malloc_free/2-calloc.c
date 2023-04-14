#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function allocates memory for an array
 * returns a pointer to the allocated memory
 * @nmemb: allocate memory for array
 * @size: allocate element of size byte
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(size * nmemb);
if (a == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
a[i] = 0;
return (a);
}
