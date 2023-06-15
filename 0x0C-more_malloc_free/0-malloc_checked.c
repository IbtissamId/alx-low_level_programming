#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * malloc_checked - a function that allocates memory
 * @b: byte to allocate
 * Return: a function that allocates memory
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);


if (p == NULL)
{
exit(98);
}
return (p);
}
