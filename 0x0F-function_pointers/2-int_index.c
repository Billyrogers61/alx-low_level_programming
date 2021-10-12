#include "function_pointers.h"

/**
 * int_index - Function to search for an interger from array values.
 * @array: array pointer.
 * @size: size of array.
 * @cmp: function pointer.
 *
 * Return: Returns interger value.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}