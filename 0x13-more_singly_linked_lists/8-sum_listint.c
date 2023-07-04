#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all data listint
 * @head: head of the list
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int s = 0;

	while (ptr)
	{
		s += ptr->n;
		ptr = ptr->next;
	}
	return (s);
}
