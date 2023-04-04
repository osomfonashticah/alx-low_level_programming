
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @head: a pointer to the head of the linked list.
 * @index: the index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *pre;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	pre = *head;
	cur = pre->next;
	for (i = 1; cur != NULL && i < index; i++)
	{
		pre = cur;
		cur = cur->next;
	}

	if (cur == NULL)
		return (-1);

	pre->next = cur->next;
	free(cur);

	return (1);
}

