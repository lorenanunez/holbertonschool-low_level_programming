#include "lists.h"

/**
 * free_dlistint - Exercise #4 function.
 *
 * @head: The head of the doubly linked list.
 *
 * Description: Frees the memory of the given doubly
 * linked list.
 *
 * Return: Always null.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode = head;
	dlistint_t *storedNode = NULL;

	while (currentNode != NULL)
	{
		storedNode = currentNode->next;
		free(currentNode);
		currentNode = storedNode;
	}
}
