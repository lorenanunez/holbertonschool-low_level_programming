#include "lists.h"

/**
 * print_dlistint - Exercise #0 function.
 *
 * @h: The doubly linked list.
 *
 * Description: Prints a doubly linked list.
 *
 * Return: The size of the list.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *currentNode = h;

	while (currentNode != NULL)
	{
		printf("%d\n", currentNode->n);
		currentNode = currentNode->next;
		size++;
	}
	return (size);
}
