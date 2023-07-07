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

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
