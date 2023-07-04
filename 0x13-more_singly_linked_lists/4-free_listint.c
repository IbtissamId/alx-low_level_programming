#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function frees a list
 * @head: head of the list
 * Return: NULL (error)
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
