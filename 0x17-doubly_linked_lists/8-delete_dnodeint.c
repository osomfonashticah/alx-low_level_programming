#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at position.
 * @h: The pointer to the head.
 * @index: The index to delete new node at.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *tp = NULL;
	unsigned int i = 0;

	if (!h || !(*h))
	{
		return (-1);
	}
	else
	{
		tp = *h;
		while (index != i++ && tp)
			tp = tp->next;
		if (!tp)
			return (-1);
		if (tp->next)
			tp->next->prev = tp->prev;
		if (index == 0)
			*h = tp->next;
		else
			tp->prev->next = tp->next;
		free(tp);
		return (1);
	}
	return (-1);
}
