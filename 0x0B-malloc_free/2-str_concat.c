#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - a function that concatenates two strings
 * @s1: string 1 to concatenate
 * @s2: string 2
 * Return: pointer for new allocate, or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
char *c;
int i = 0, j = 0, l1 = 0, l2 = 0;

while (s1 && s1[l1])
	l1++;
while (s2 && s2[l2])
	l2++;

c = malloc(sizeof(char) * (l1 + l2 + 1));
if (c == NULL)
{
	return (NULL);
}
if (s1)
{
	while (i < l1)
	{
		c[i] = s1[i];
		i++;
	}
}

if (s2)
{
	while (i < (l1 + l2))
	{
		c[i] = s2[j];
		i++;
		j++;
	}
}

c[i] = '\0';

return (c);
}
