#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked listint_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: The value of the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}

