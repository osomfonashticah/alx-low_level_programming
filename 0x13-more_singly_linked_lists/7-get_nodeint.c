#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked listint_t list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to return.
 * Return: A pointer to the nth node of the list..
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;
	for (i = 0; node != NULL && i < index; i++)
		node = node->next;

	return (node);
}

