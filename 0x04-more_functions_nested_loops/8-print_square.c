#include "main.h"

/**
 * print_square - function to print square.
 * @size: size of the square.
 * Return: Nothing.
 */
void print_square(int size)
{
	int rows, count;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (rows = 0; rows < size; rows++)
	{
		for (count = 0; count < size; count++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
