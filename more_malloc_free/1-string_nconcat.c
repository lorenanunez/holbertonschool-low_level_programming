#include "main.h"

/**
 * string_nconcat - Exercise #1 function
 *
 * @s1: The first part of the string
 * @s2: The second part of the string
 * @n: The number of characters to copy from
 * the second string
 *
 * Description: Concatenates two strings
 *
 * Return: A pointer to the allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, x, s1len = 0, s2len = 0, strlenght = 0;
	char *str = NULL;

	if (s1 != NULL)
	{
		s1len = (int) strlen(s1);
	}
	if (s2 != NULL && n > 0)
	{
		s2len = (int) strlen(s2);
		if (n < s2len)
		{
			s2len = n;
		}
	}
	strlenght = s1len + s2len;
	str = malloc((strlenght + 1) * sizeof(char));
	if (str != NULL)
	{
		for (i = 0; i < s1len; i++)
		{
			str[i] = s1[i];
		}
		for (x = 0; x < s2len; x++)
		{
			str[i] = s2[x];
			i++;
		}
		str[i++] = '\0';
	}
	return (str);
}
