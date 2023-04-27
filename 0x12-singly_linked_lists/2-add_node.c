#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nb;
	unsigned int len = 0;

	while (str[len])
		len++;
	nb = malloc(sizeof(list_t));
	if (!nb)
		return (NULL);
	nb->str = strdup(str);
	nb->len = len;
	nb->next = (*head);
	(*head) = nb;
	return (*head);
}
