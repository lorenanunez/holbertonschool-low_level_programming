#include "lists.h"

/**
 * print_list - Exercise #0 function
 *
 * @h: The list to print
 *
 * Description: Prints all the elements of a list
 * and then returns the number of nodes.
 *
 * Return: The number of the list nodes.
*/

size_t print_list(const list_t *h)
{
	size_t list_size = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		list_size++;
		h = h->next;
	}
	return (list_size);
}

