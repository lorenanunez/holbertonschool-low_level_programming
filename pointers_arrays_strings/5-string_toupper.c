#include "main.h"

/**
 * string_toupper - Exercise #5 function
 *
 * @str: The string to capitalize
 *
 * Description: Capitalizes a string
 *
 * Return: The string in uppercase.
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
