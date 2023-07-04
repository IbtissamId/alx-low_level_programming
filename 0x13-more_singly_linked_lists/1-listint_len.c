#include "lists.h"
#include <stdio.h>
#include <stddef.h>



/**
 * listint_len - a function that returns the number of
 * elements in a linked list
 * @h: pointer to the
 * Return: number of elements
 */


size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
