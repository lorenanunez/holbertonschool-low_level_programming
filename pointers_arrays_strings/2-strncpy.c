#include "main.h"

/**
 * _strncpy - Exercise #1 function
 * @dest: The destination
 * @src: The source string to copy
 * @n: The number of characters from the source string to copy
 * Description: Concatenates two strings
 *
 * Return: The concatenated string
*/


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n > 0 && strlen(src) > 0)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
