#include "main.h"
#include <string.h>

/**
  * add_node_end - adds a new node at the end of a list_t list.
  * @head: pointer to pointer header node.
  * @str: input string.
  *
  * Return: address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	temp = *head;

	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = (list_t *) malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newnode;
	return (newnode);
}
