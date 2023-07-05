#include "main.h"

/**
 * create_array - Exercise #0 function
 *
 * @size: The size of the array
 * @c: The initial character
 *
 * Description: Creates an array of chars, and
 * initializes it with a specific char.
 *
 * Return: A pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				array[i] = c;
			}
		}
		return (array);
	}
}
