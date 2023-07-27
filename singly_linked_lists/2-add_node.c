#include "lists.h"

/**
 * add_node - Exercise #2 function.
 *
 * @head: The head of to append the new node
 * @str: The string to the new node.
 *
 * Description: Appends a new node of type list_t to
 * the beginning of the list.
 *
 * Return: The new node.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *theList;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	theList = malloc(sizeof(list_t));
	if (theList != NULL)
	{
		theList->str = strdup(str);
		theList->len = strlen(str);
		theList->next = *head;
	}
	else
	{
		free(theList);
	}
	return (theList);
}
