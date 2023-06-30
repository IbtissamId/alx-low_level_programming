#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: another pointer
 * @str: new string
 * Return: the address of the new element
 */



list_t *add_node(list_t **head, const char *str)
{
	list_t *new_p;

	unsigned int len = 0;

	while (str[len])
		len++;

	new_p = malloc(sizeof(list_t));
	if (!new_p)
		return (NULL);

	new_p->str = strdup(str);
	new_p->len = len;
	new_p->next = (*head);
	(*head) = new_p;

	return (*head);
}
