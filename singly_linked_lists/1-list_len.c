#include "lists.h"

/**
 * list_len - Exercise #1 function
 *
 * @h: The list
 *
 * Description: Returns the size of a list.
 *
 * Return: The size of the list.
*/

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
