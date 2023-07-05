#include "main.h"

/**
 * str_concat - Exercise #2 function
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Description: Concatenates two strings
 *
 * Return: a newly allocated space in memory
 * which contains the contents of s1, followed
 * by the contents of s2, and null terminated
*/

char *str_concat(char *s1, char *s2)
{
	int s1length, s2length, length, strpos, i;
	char *str = NULL;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		strpos = 0;
		s1length = strlen(s1);
		s2length = strlen(s2);
		length = s1length + s2length;
		str = malloc(length * sizeof(char) + 1);
	}
	if (str != NULL)
	{
		for (i = 0; i < s1length; i++)
		{
			str[strpos] = s1[i];
			strpos++;
		}
		for (i = 0; i < length; i++)
		{
			str[strpos] = s2[i];
			strpos++;
		}
		str[strpos] = '\0';
	}
	return (str);
}
