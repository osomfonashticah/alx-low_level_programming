#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints allelements
 * @h: pointer to the head
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
