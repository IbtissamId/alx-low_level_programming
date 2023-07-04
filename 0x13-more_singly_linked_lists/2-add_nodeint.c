#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the beginning of list
 * @head: head of the list
 * @n: constant value
 *Return: NULL (fail)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nd;

	if (head == NULL)
		return (NULL);
	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->next = *head;
	*head = nd;
	return (*head);
}
