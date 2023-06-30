#include "lists.h"
#include <stdlib.h>


/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: pointer
 * Return: the numbers of element
 */


size_t list_len(const list_t *h)
{
	int i = 0;


	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
