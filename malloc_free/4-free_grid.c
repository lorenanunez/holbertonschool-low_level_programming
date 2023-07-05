#include "main.h"

/**
 * free_grid - Exercise #4 function
 *
 * @grid: The 2D array to free
 * @height: The height of the array
 *
 * Description: Frees a 2 dimensional grid
 *
 * Return: Always null
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
