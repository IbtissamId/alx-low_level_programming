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
int j, k;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
j = k = 0;
while (s1[j] != '\0')
j++;
while (s2[k] != '\0')
k++;
c = malloc(sizeof(char) * (j + k + 1));
if (c == NULL)
return (NULL);
j = k = 0;
while (s1[j] != '\0')
{
c[j] = s1[j];
j++;
}
while (s2[k] != '\0')
{
c[j] = '\0';
return (c);

}

