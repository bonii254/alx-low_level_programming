#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: pointer to header node.
  *
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
