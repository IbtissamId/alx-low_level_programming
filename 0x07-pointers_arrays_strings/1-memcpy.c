#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: where we stored the memory area
 * @src: where we copied the memory area
 * @n: number of bytes
 *
 * Return: copied memory n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
