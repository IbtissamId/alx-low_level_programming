#include "main.h"
/**
 * c_root - function return for the square root
 * @i:int
 * @r:test root
 * Return: square root
 */
int c_root(int i, int r)
{
        if (r * r > i)
                return (-1);
        if (r * r == i)
                return (r);
        return (c_root(i, r + 1));
}
/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (c_root(n, 0));
}


