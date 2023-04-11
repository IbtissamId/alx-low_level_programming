#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
char *n;
int j = 0;
int a = 0;
if (str == NULL)
return (NULL);
while (str[j] != '\0')
j++;
n = malloc(sizeof(char) * (j + 1);
if (n == NULL)
return (NULL);
for (a = 0; str[a]; a++)
n[a] = str[a];
return (n);
}
