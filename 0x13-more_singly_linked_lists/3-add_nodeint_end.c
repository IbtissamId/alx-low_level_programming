#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - function that adds node at end of a list
  * @head: head of list
  * @n: new value
  * Return: NULL (fail)
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nv;
	listint_t *p;

	if (head == NULL)
		return (NULL);
	nv = malloc(sizeof(listint_t));
	if (nv == NULL)
		return (NULL);
	nv->n = n;
	nv->next = NULL;
	if (*head == NULL)
	{
	*head = nv;
		return (nv);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = nv;
	return (nv);
}
