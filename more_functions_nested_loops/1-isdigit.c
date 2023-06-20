#include "main.h"

/**
 * _isdigit - Exercise 0 function
 * @c: The char to print if is digit
 * Description: Returns if the character is a digit
 *
 * Return: 1 if digit, otherwise 0
*/

int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}