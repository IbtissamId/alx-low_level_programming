#include <stdlib.h>
#include "dog.h"
/**
 * _len - funtion returns length of a string
 * @str: string
 * Return: the length of the string
 */

int _len(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
{
i++;
}
return (i);
}
/**
 * *_cpy - function copies the string pointed to by s
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @s: s to be copied
 * Return: the pointer to dest
 */

char *_cpy(char *dest, char *s)
{
int l, i;

l = 0;
while (s[l] != '\0')
{
l++;
}
for (i = 0; i < l ; i++)
{
dest[i] = s[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - funtion creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

int nd, od;
nd = _len(name);
od = _len(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (nd + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (od + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_cpy(dog->name, name);
_cpy(dog->owner, owner);
dog->age = age;
return (dog);
}
