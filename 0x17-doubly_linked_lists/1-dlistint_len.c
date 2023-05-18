#include "lists.h"

/**
 * dlistint_len - gets the length of the list
 * @h: The list head
 * Return: The no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *tp;

	tp = h;
	while (tp)
	{
		tp = tp->next;
		nodes++;
	}
	return (nodes);
}
