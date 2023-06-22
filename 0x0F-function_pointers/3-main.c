#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: number of parameters
 * @argv: numbers to be calculated
 * Return: 0 in succes
 */

int main(int argc, char *argv[])
{
	int i, j, result;
	int (*oprt)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	oprt = get_op_func(argv[2]);

	if (oprt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = oprt(i, j);
	printf("%d\n", result);
	return (0);
}
