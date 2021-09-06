#include "main.h"

/**
 * swap_int - function to swap two integers using pointers.
 * @a: pointer to the the first interger.
 * @b: pointer to the second integer.
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int a_copy;

	a_copy = *a;
	*a = *b;
	*b = a_copy;
}
