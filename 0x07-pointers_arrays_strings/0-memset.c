#include "main.h"
/**
 * _memset() is a function that fill a block of memory
 * @b: the constant value
 * @n: number of bytes to fill
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
