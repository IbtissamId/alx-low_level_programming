#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function adds 2 numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: the result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function calculate diff of 2 numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function calculate multiplication of 2 numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - function divide 2 numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: the result
 */
int op_div(int a, int b)
{
if (b != 0)
return (a / b);
printf("Error\n");
exit(100);
}

/**
 * op_mod - function  the remainder of the division of  2 numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: the result
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
