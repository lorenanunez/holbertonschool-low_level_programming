#include "main.h"

/**
 * string_nconcat - Exercise #2 function
 *
 * @nmemb: The number of elements in the array
 * @size: The size of each element of the array
 *
 * Description: Allocates memory for an array
 *
 * Return: A pointer to the allocated memory, or NULL
 * if nmemb or size is 0.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(nmemb * size);
	if (array != NULL)
	{
		for (i = 0; i < nmemb; i++)
		{
			array[i] = 0;
		}
	}
	return (array);
}
