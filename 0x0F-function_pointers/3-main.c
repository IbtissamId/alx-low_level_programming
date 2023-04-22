#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: the number of the parameters
 * @argv: the parameters in the case the number to be calculated
 * Return: 0 in success
 */

int main(int argc, char *argv[])
{
	int i, j, r;
	int (*op)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	r = op(i, j);
	printf("%d\n", r);
	return (0);
}
