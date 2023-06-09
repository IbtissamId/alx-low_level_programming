#include <stdio.h>



/**
 * main - programn that prints all arguments it receives
 * @argc: argument count
 * @argv: pointer of argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int cpt;

	for (cpt = 0; cpt < argc; cpt++)
		printf("%s\n", argv[cpt]);
	return (0);
}
