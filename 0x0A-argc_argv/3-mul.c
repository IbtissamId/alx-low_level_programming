#include <stdio.h>
#include "main.h"


/**
 * main - program that multiplies two numbers
 * @c: argument count
 * @v: argument num
 * Return: 0 (success), 1 for error
 */


int main(int c, char *v[])
{
	int nb1, nb2;

	if (c < 3)
	{
		printf("Error\n");
		return (1);
	}
	nb1 = atoi(v[1]);
	nb2 = atoi(v[2]);
	printf("%d\n", nb1 * nb2);

	return (0);
}

