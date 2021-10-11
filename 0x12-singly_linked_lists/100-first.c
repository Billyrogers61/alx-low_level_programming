#include <stdio.h>

/**
 * Excute_before_main - Function to print before the main function.
 *
 * Return: Nothing.
 */
void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
