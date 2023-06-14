#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * main - program that adds positive numbers
 * @c: argument count
 * @v: arg
 * Return: 0
 */



int main(int c, char *v[])
{
int i, a, sum = 0;
char *sym;


if (c < 2)
{
printf("0\n");
return (0);
}

for (i = 1; v[i]; i++)
{
a = strtol(v[i], &sym, 10);
if (*sym)
{
	printf("Error\n");
	return (1);
}
else
{
	sum += a;
}
}
printf("%d\n", sum);
return (0);
}
