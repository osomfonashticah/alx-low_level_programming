#include "lists.h"

/**
 * get_dnodeint_at_index - A function that gets a node at index
 * @head: The pointer to head of list
 * @index: The index of node
 * Return: A pointer to node if found, or NULL not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head)
	{
		if (j++ == index)
			break;
		head = head->next;
	}
	return (head);
}
