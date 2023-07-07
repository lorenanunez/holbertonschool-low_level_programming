#include "main.h"

/**
 * malloc_checked - Exercise #0 function
 *
 * @b: The size of the array
 *
 * Description: Allocates memory using malloc
 *
 * Return: A pointer to the allocated memory
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
