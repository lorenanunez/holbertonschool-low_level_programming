#include "lists.h"

/**
 * add_dnodeint_end - Exercise #3 function.
 *
 * @head: The head of the doubly linked list.
 * @n: The value of the node.
 *
 * Description: Adds a new node at the end of the
 * given doubly linked list.
 *
 * Return: The created node.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *theNode;
	dlistint_t *currentNode;

	if (head == NULL)
	{
		return (NULL);
	}
	theNode = malloc(sizeof(dlistint_t));
	if (theNode != NULL)
	{
		theNode->n = n;
		theNode->next = NULL;
		if (*head == NULL)
		{
			theNode->prev = NULL;
			*head = theNode;
		}
		else
		{
			currentNode = *head;
			while (currentNode->next != NULL)
			{
				currentNode = currentNode->next;
			}
			currentNode->next = theNode;
			theNode->prev = currentNode;
		}
	}
	return (theNode);
}
