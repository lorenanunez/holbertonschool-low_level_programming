#include "lists.h"

/**
 * sum_dlistint - Exercise #6 function.
 *
 * @head: The head of the doubly linked list.
 *
 * Description: Adds all the values from the list.
 *
 * Return: The sum of all the list values.
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode = head;
	int sum = 0;

	while (currentNode != NULL)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}

	return (sum);
}
