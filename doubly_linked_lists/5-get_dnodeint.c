#include "lists.h"

/**
 * get_dnodeint_at_index - Exercise #5 function.
 *
 * @head: The head of the doubly linked list.
 * @index: The index of the node to retrieve.
 *
 * Description: Retrieves a node of the list based
 * on the given index.
 *
 * Return: The required node, or null if the index is
 * out of bounds.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *theNode = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (theNode->next != NULL)
		{
			theNode = theNode->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (theNode);
}
