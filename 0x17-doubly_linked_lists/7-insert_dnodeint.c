#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 * @h: the head pointer
 * @idx: the new_node node index.
 * @n: The integer.
 * Return: If fails - NULL Otherwise - the address of the new_node node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tp = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		tp = tp->next;
		if (tp == NULL)
			return (NULL);
	}
	if (tp->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = tp;
	new_node->next = tp->next;
	tp->next->prev = new_node;
	tp->next = new_node;

	return (new_node);
}
