#include "function_pointers.h"

/**
 * array_iterator - Function to execute a function gievn as a parameter.
 * @array: pointer varaible to an array.
 * @siize: size of the array.
 * @action: pointer to a function.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
