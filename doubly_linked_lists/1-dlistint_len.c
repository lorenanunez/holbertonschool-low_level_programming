#include "lists.h"

/**
 * dlistint_len - Exercise #1 function.
 *
 * @h: The doubly linked list.
 *
 * Description: Returns the number of elements in
 * the list.
 *
 * Return: The number of elements in the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
