#include "main.h"
#include <stdlib.h>


/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: intial value of the array
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int cpt;

a = malloc(sizeof(char) * size);

if (size == 0 || a == NULL)
	return (NULL);
for (cpt = 0; cpt < size; cpt++)
	a[cpt] = c;
return (a);
}
