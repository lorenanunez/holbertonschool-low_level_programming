#include "lists.h"

/**
 * add_node_end - Exercise #3 function.
 *
 * @head: The head to append the new node
 * @str: The string of the new node.
 *
 * Description: Appends a new node of type list_t to
 * the end of the list.
 *
 * Return: The new node.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *theList;
	list_t *pointer;

	if (str == NULL)
	{
		return (NULL);
	}
	theList = malloc(sizeof(list_t));
	if (theList != NULL)
	{
		theList->str = strdup(str);
		theList->len = strlen(str);
		theList->next = NULL;
		if (*head == NULL)
		{
			*head = theList;
		}
		else
		{
			*pointer = **head;
			while (pointer->next != NULL)
			{
				pointer = pointer->next;
			}
			pointer->next = theList;
		}
	}
	return (theList);
}
