#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodef;
	listint_t *t = *head;

	nodef = malloc(sizeof(listint_t));
	if (!nodef)
		return (NULL);
	nodef->n = n;
	nodef->next = NULL;
	if (*head == NULL)
	{
		*head = nodef;
		return (nodef);
	}
	while (t->next)
		t = t->next;
	t->next = nodef;
	return (nodef);
}
