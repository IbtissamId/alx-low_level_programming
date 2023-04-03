#include "main.h"
/**
 * _memcpy is a function that copies memory area
 * @dest: where we stored the memory area
 * @src: where we copied the memory area
 * @n: number of bytes
 *
 * Return: copied memory 
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;

	for (int r = 0; r < i; i++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
