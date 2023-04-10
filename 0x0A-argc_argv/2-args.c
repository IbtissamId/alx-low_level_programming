#include <stdio.h>
#include "main.h"

/**
 * main - function that prints all arguments it receives
 * @argc: argument count
 * @argv: pointer of argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
printf("%s\n", argv[n]);
return (0);
}
