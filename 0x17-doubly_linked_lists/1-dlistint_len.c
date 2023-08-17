#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a linked dlistint_t list.
  * @h: pointer to header node.
  *
  * Return: number of elements in a linked dlistint_t list.
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
