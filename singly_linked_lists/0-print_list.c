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
			putchar('[');
			putchar(48 + h->len);
			putchar(']');
			putchar(' ');
			println(h->str);
		}
		else
		{
			println("[0] (nil)");
		}
		list_size++;
		h = h->next;
	}
	return (list_size);
}

/**
 * println - String and newline printer.
 *
 * @str: The string to print.
 *
 * Description: Prints a string to the standard
 * output followed by a new line.
 *
 * Return: Always null.
*/

void println(char *str)
{
	char *pointer = str;

	while (*pointer != '\0')
	{
		putchar(*pointer);
		pointer++;
	}
	putchar('\n');
}
