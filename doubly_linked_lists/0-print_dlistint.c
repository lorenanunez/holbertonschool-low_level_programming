#include "lists.h"

/**
 * malloc_checked - Exercise #0 function
 *
 * @b: The size of the array
 *
 * Description: Allocates memory using malloc
 *
 * Return: A pointer to the allocated memory
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
