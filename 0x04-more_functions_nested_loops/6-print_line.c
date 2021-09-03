#include "main.h"

/**
 * print_line - function to print a line.
 * @n: number of times character _ should be printed
 * Return: Nothing
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
			if (n == 0)
			{
				_putchar('\n');
				break;
			}
			else
			{
				continue;
			}
		}
	}
}
