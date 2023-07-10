#include "main.h"

/**
 * array_range - Exercise #3 function
 *
 * @min: The minimum value of the array
 * @max: The maximum value of the array
 *
 * Description: Ccreates an array of integers containing
 * all the values from min (included) to max (included),
 * ordered from min to max.
 *
 * Return: The pointer to the newly created array, or
 * null if min > max or the algotithm fails.
*/

int *array_range(int min, int max)
{
	int array_size = (max - min) + 1;
	int *array = NULL;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(array_size * sizeof(int));
	if (array != NULL)
	{
		for (i = 0; i < array_size; i++)
		{
			array[i] = min;
			min++;
		}
	}
	return (array);
}
