#include "main.h"

/**
 * _strncpy - Exercise #2 function
 * @dest: The destination
 * @src: The source string to copy
 * @n: The number of characters from the source string to copy
 * Description: Concatenates two strings
 *
 * Return: The destination string with the n characters
 * from the source string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
