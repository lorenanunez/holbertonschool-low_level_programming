#include "main.h"

/**
 * _isupper - Exercise 1 function
 * @c: The char to print if it is uppercase
 * Description: Returns if the character is uppercase
 *
 * Return: 1 if uppercase, otherwise 0
*/

int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}