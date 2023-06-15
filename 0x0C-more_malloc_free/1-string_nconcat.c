#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: First string to concat
 * @s2: second one
 * @n: unsigned int
 * Return: NULL (fails)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c1, c2, c3;
	char *str;

	if (s1 == NULL)
	{
		c1 = 0;
	}

	else
	{
		for (c1 = 0; s1[c1]; c1++)
			;
	}
	if (s2 == NULL)
	{
		c2 = 0;
	}
	else
	{
		for (c2 = 0; s2[c2]; c2++)
			;
	}
	if (c2 > n)
		c2 = n;
	str = malloc(sizeof(char) * (c1 + c2 + 1));
	if (str == NULL)
		return (NULL);
	for (c3 = 0; c3 < c1; c3++)
		str[c3] = s1[c3];
	for (c3 = 0; c3 < c2; c3++)
		str[c3 + c1] = s2[c3];
	str[c1 + c2] = '\0';
	return (str);
}
