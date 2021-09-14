#include "main.h"

/**
 * print_chessboard - Functon to print a chessboard.
 * @a: pointer array.
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int count_1, count_2;

	for (count_1 = 0; count_1 < 8; count_1++)
	{
		for (count_2 = 0; count_2 < 8; count_2++)
		{
			_putchar(a[count_1][count_2]);
		}
		_putchar('\n');
	}
}
