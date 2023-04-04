#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: pointer to head of node to be printed.
  *
  * Return: number of nodes.
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->n)
			printf("nil");
		else
			printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
