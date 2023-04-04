#include <stdio.h>

/**
*insert_nodeint_at_index - insert a new node to a listint_t
*@head: a pointer to the address of the head
*@idx: the index of the listint_t list
*@n: the integer
*Return: the address of the new_node node
*/


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *copy_old = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = copy_old;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy_old == NULL || copy_old->next == NULL)
			return (NULL);

		copy_old = copy_old->next;
	}

	new_node->next = copy_old->next;
	copy_old->next = new_node;

	return (new_node);
}

