#include "lists.h"

/**
 * add_dnodeint - Exercise #2 function.
 *
 * @head: The head of the doubly linked list.
 * @n: The value of the node.
 *
 * Description: Adds a new node at the beginning of the
 * given doubly linked list.
 *
 * Return: The created node.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *theNode;

	if (head == NULL)
	{
		return (NULL);
	}
	theNode = malloc(sizeof(dlistint_t));
	if (theNode != NULL)
	{
		theNode->n = n;
		theNode->next = *head;
		theNode->prev = NULL;
		if (*head != NULL)
		{
			(*head)->prev = theNode;
		}
		*head = theNode;
	}
	return (theNode);
}
