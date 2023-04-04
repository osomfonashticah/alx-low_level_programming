#include <stdio.h>

/**
*insert_nodeint_at_index - insert a new node to a listint_t
*@head: a pointer to the address of the head
*@idx: the index of the listint_t list
*@n: the integer
*Return: the address of the new node
*/



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = (listint_t *) malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->data = n;

	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	listint_t *currentNode = *head;
	unsigned int currentPosition = 0;

	while (currentPosition < idx - 1 && currentNode != NULL)
	{
		currentNode = currentNode->next;
		currentPosition++;
	}

	if (currentNode == NULL || currentPosition < idx - 1)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}

