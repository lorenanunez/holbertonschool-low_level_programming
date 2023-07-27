#include <stdio.h>

/**
 * before_main - Exercise #5 function.
 *
 * Description: Prints a string before the main
 * function is executed. This is done by putting
 * attribute for the function. When the attribute
 * is constructor, the function will be executed
 * before main().
 *
 * Return: Always void.
*/

void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
