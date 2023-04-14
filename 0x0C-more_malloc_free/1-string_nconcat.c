#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i = 0, j = 0, k = 0, l = 0;
while (s1 && s1[k])
k++;
while (s2 && s2[l])
l++;
if (n < l)
str = malloc(sizeof(char) * (k + n + 1));
else
str = malloc(sizeof(char) * (k + l + 1));
if (!str)
return (NULL);
while (i < k)
{
str[i] = s1[i];
i++;
}
while (n >= l && i < (k + l))
str[i++] = s2[j++];
str[i] = '\0';
return (str);
}
