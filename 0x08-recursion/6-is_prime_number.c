#include "main.h"
/**
 * c_prime - check to know if number is prime
 * @nbr: number
 * @d: divisor
 * Return: divisor
 */

int c_prime(int nbr, int d)
{
	if (d < 2 || d % nbr == 0)
		return (0);
	else if (nbr > d / 2)
		return (1);
	else
		return (c_prime(nbr + 1, d));
}

/**
 * is_prime_number - function to check if prime
 * @n: int
 * Return: int
 */



int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (c_prime(2, n));
}
