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
	int i, s1length, s2length, strpos = 0, length;
	char *str = NULL;

	if (s1 == NULL)
		s1length = 0;
	else
		s1length = strlen(s1);
	if (s2 == NULL)
		s2length = 0;
	else
		s2length = strlen(s2);
	length = s1length + s2length;
	str = malloc(length * sizeof(char) + 1);
	if (str != NULL)
	{
		if (s1length > 0)
		{
			for (i = 0; i < s1length; i++)
			{
				str[strpos] = s1[i];
				strpos++;
			}
		}
		if (s2length > 0)
		{
			for (i = 0; i < length; i++)
			{
				str[strpos] = s2[i];
				strpos++;
			}
		}
		str[strpos] = '\0';
	}
	return (str);
}
