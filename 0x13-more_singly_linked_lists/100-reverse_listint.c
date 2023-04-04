#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to the head of the linked list.*
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL, *nex;

	while (*head != NULL)
	{
		nex = (*head)->nex;
		(*head)->nex = pre;
		pre = *head;
		*head = nex;
	}

	*head = pre;
	return (*head);
}
