#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a linked listint_t list.
 * @head: A pointer to the head of the linked list.
 * Return: The sum of all the data of the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

