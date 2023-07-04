#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique node
 * @head: A pointer to the head of the list
 * Return: If the list is not looped - 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *pt, *ph;
	size_t nd = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	pt = head->next;
	ph = (head->next)->next;

	while (ph)
	{
		if (pt == ph)
		{
			pt = head;
			while (pt != ph)
			{
				nd++;
				pt = pt->next;
				ph = ph->next;
			}

			pt = pt->next;
			while (pt != ph)
			{
				nd++;
				pt = pt->next;
			}

			return (nd);
		}

		pt = pt->next;
		ph = (ph->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a list
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nd, idx = 0;

	nd = looped_listint_len(head);

	if (nd == 0)
	{
		for (; head != NULL; nd++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < nd; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nd);
}

