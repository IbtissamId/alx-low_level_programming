#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index of list
 * @head: head of the list
 * @index: index of the list
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int v;
	listint_t *p, *np;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		np = (*head)->next;
		free(*head);
		*head = np;
		return (1);
	}
	p = *head;
	for (v = 0; v < index - 1; v++)
	{
		if (p->next == NULL)
			return (-1);
		p = p->next;
	}
	np = p->next;
	p->next = np->next;
	free(np);
	return (1);
}
