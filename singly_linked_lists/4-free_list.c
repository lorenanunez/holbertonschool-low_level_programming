#include "lists.h"

/**
 * free_list - Exercise #4 function.
 *
 * @head: The head of the list to free.
 *
 * Description: Frees a list.
 *
 * Return: Always void.
*/

void free_list(list_t *head)
{
	list_t *currentNode, *storedNode;

	currentNode = head;
	while (currentNode != NULL)
	{
		storedNode = currentNode->next;
		free(currentNode->str);
		free(currentNode);
		currentNode = storedNode;
	}
}
