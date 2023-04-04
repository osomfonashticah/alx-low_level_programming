#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to the head of the linked list.*
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nex, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		nex = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nex;
	}

	(*head)->next = prev;

	return (*head);
}
