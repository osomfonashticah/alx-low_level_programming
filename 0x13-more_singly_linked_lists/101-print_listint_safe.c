
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to the head of the linked list.*
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur, *pre;
	size_t count = 0, i;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		cur = head;
		head = head->next;

		for (i = 0; i < count; i++)
		{
			if (cur == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				exit(98);
			}
			cur = cur->next;
		}
	}

	return (count);
}
