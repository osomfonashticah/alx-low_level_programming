#include "lists.h"

/**
 * sum_dlistint - sums The elements in the list
 * @head: pointer to head of the list
 * Return: sum of all elements, or 0 if list is NULL
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
