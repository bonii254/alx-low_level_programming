#include "lists.h"

/**
  * listint_len - return the number of elements in a list.
  * @h: pointer to the head of the linked list.
  *
  * Return: number of elements in the linked list.
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
