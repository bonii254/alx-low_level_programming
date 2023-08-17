#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t list.
  * @h: pointer to head node.
  *
  * Return: the number of nodes.
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *temp = h;

	if (!h)
		return (0);

	while (temp)
	{
		if (temp->n == '\0')
		{
			printf("0\n");
		}
		else
		{
			num++;
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
	return (num);
}
