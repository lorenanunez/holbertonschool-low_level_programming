#include "main.h"

/**
 * alloc_grid - Exercise #3 function
 *
 * @width: The width of the array
 * @height: The height of the array
 *
 * Description: Returns a pointer to a 2 dimensional
 * array of integers
 *
 * Return: a pointer to a 2 dimensional array of integers
*/

int **alloc_grid(int width, int height)
{
	int i, j, z;
	int **array = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] != NULL)
		{
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
		else
		{
			for (z = 0; z < i; z++)
			{
				free(array[z]);
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}
