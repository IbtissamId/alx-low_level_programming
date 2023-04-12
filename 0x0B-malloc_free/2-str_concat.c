#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *c;
unsigned int i = 0, j = 0, l = 0, m = 0;

while (s1 && s1[l])
l++;
while (s2 && s2[m])
m++;

c = malloc(sizeof(char) * (l + m + 1));
if (c == NULL)
return (NULL);

i = 0;
j = 0;

if (s1)
{
while (i < l)
{
c[i] = s1[i];
i++;
}
}

if (s2)
{
while (i < (l + m))
{
c[i] = s2[j];
i++;
j++;
}
}
c[i] = '\0';

return (c);
}
