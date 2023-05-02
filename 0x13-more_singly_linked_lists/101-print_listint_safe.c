#include "lists.h"
#include <stdio.h>

/**
  * print_listint_safe - prints a listint_t linked list.
  * @head: pointer to head node.
  *
  * Return: the number of nodes in the list.
  */

size_t print_listint_safe(const listint_t *head)
{
	int len = 0, flag = 0;
	const listint_t *slow_temp, *fast_temp;

	if(!head)
		exit(98);
	slow_temp = fast_temp = head;
	while (fast_temp && fast_temp->next)
	{
		fast_temp = fast_temp->next->next;
		slow_temp = slow_temp->next;
		if (slow_temp == fast_temp)
		{
			flag = 1;
			break;
		}
	}

	fast_temp = head;
	while (fast_temp && slow_temp)
	{
		printf("[%p] %d\n", (void *) fast_temp, fast_temp->n);
		len++;
		if (flag && fast_temp == slow_temp)
			break;
		fast_temp = fast_temp->next;
		if (flag && fast_temp == slow_temp)
			break;
		slow_temp = slow_temp->next;
	}
	return (len);
}
