#include "main.h"

/**
 * _strdup - Exercise #1 function
 *
 * @str: The string to duplicate
 *
 * Description: Returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 *
 * Return: A pointer to a newly allocated space in memory
*/

char *_strdup(char *str)
{
	int i;
	char *str_duplicated;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		str_duplicated = malloc((strlen(str) * sizeof(char)) + 1);
		if (str_duplicated != NULL)
		{
			for (i = 0; i < (int) strlen(str); i++)
			{
				str_duplicated[i] = str[i];
			}
		}
		return (str_duplicated);
	}
}
