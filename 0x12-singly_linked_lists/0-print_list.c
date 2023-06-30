#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>



/**
 * print_list - a function that prints all the elements for list t
 * @h: pointer to the elements of a list
 * Return: the number of nodes
 */



size_t print_list(const list_t *h)
{
	int p = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		p++;
		h = h->next;
	}
	return (p);
}
