#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of list
 * @head: head of list
 * Return: empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
