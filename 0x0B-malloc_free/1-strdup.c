#include <stdlib.h>
#include "main.h"


/**
 * _strdup - function that returns a pointer to a newly allocated memory
 * @str: char
 * Return: Return: pointer to copied string, NULL (Error)
 */

char *_strdup(char *str)
{
char *c;
int len = 0, cpt;
if (str == NULL)
{
	return (NULL);
}
while (str[len] != '\0')
{
	len++;
}
c = malloc(sizeof(char) * (len + 1));

if (c == NULL)
{
	return (NULL);
}

for (cpt = 0; str[cpt]; cpt++)
c[cpt] = str[cpt];
return (c);
}
