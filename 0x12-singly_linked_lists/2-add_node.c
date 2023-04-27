#include <string.h>
#include "lists.h"

/**
  * add_node - add node at the begining of a list.
  * @head: pointer to pointer header node.
  * @str: pointer to a string.
  *
  * Return: address of the new element, or NULL if it failed.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = (list_t *) malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (newnode);
}
