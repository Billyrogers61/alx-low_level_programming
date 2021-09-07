#include "main.h"

/**
 * print_triangle - Function to print triangle.
 * @size: size of the traingle.
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int row, column, space;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			space = (size - row - 1);
			for (column = 0; column < size; column++)
			{
				if (space > column)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
