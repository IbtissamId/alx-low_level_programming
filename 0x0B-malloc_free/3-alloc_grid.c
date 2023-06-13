#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function returns a pointer to a 2 dimensional array of int
 * @width: width of array
 * @height: height of array
 * Return: pointer (Success), NULL(Error)
 */

int **alloc_grid(int width, int height)
{
int **m;
int cpt1, cpt2;

if (height <= 0 || width <= 0)
{
	return (NULL);
}
m = malloc(sizeof(int *) * height);
if (m == NULL)
{
	return (NULL);
}
for (cpt1 = 0; cpt1 < height; cpt1++)
{
	m[cpt1] = malloc(sizeof(int) * width);
	if (m[cpt1] == NULL)
	{
		free(m);
		for (cpt2 = 0; cpt1 <= cpt2; cpt2++)
			free(m[cpt2]);
		return (NULL);
	}
}


for (cpt1 = 0; cpt1 < height; cpt1++)
{
	for (cpt2 = 0; cpt2 < width; cpt2++)
	{
		m[cpt1][cpt2] = 0;
	}
}
return (m);

}
