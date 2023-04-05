#include "lists.h"

/**
  * free_listint_safe - a function that frees a listint_t list.
  * @h: double pointer to head node.
  *
  * Return:  the size of the list that was free’d.
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *curr_node, *next_node;
	int sum = 0;

	if (!h || !(*h))
		return (sum);

	curr_node = *h;
	*h = NULL;

	while (curr_node)
	{
		sum++;
		next_node = curr_node->next;
		free(curr_node);
		if (curr_node >= next_node)
			return (sum);
		curr_node = next_node;
	}
	return (sum);
}
