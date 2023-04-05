#include "lists.h"

/**
  * print_listint_safe - a function that prints a listint_t linked list.
  * @head: pointer to head node.
  *
  * Return: the number of nodes in the list.
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *temp;

	if (!head)
		exit(98);

	while (head)
	{
		num++;
		printf("[%p] %d\n", (void *) head, head->n);
		temp = head;
		head = head->next;

		if (temp <= head)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			break;
		}
	}
	return (num);
}
