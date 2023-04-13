#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument num
 * Return: 0 (success), 1 for error
 */

int main(int argc, char *argv[])
{
int a, b;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}