nclude "lists.h"

/**
 * free_dlistint - A function that frees a doubly linked list
 * @head: A pointer to head of doubly linked list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
