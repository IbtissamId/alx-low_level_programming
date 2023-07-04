#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of list
 * @head: head of list
 * @index: index of the node
 * Return: pointer of index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cpt;

	if (head == NULL)
		return (NULL);
	for (cpt = 0; cpt < index; cpt++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
