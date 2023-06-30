#include "lists.h"
#include <string.h>
#include <stdlib.h>



/**
 * str_len - calculate the length of a string
 * @s: string
 * Return: length of string
 */


int str_len(char *s)
{
	int c;

	for (c = 0; s[c]; c++)
		;
	return (c);
}

/**
 * add_node_end - a function that adds a new node at the end of alist
 * @head: head of list
 * @str: string to duplicate
 * Return: pointer to the node
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nd, *temp;

	if (str == NULL)
		return (NULL);
	nd = malloc(sizeof(list_t));
	if (nd == NULL)
		return (NULL);
	nd->str = strdup(str);
		if (nd->str == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->len = str_len(nd->str);
	nd->next = NULL;
	if (*head == NULL)
	{
		*head = nd;
		return (nd);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = nd;
	return (nd);
}
