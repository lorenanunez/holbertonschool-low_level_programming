#include "main.h"

/**
 * _strcpy - Exercise #9 function
 * @dest: The destination to copy the string to
 * @src: The source of the string to copy
 * Description: copies the string pointed to
 * by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
