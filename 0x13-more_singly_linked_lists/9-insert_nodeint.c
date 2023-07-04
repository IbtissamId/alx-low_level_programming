#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts new node given position
 * @head: head of the list
 * @idx: index to add a node
 * @n: value of node
 * Return: the adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *p, *nd;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		p = *head;
		for (i = 0; i < idx - 1 && p != NULL; i++)
		{
			p = p->next;
		}
		if (p == NULL)
			return (NULL);
	}
	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);
	nd->n = n;
	if (idx == 0)
	{
		nd->next = *head;
		*head = nd;
		return (nd);
	}
	nd->next = p->next;
	p->next = nd;
	return (nd);
}
