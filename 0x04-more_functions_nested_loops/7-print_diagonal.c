#include "main.h"

/**
 * print_diagonal - function to draw diagonal lines on terminal
 * @n: number of times to print line (\)
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int no_spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			for (no_spaces = 0; no_spaces < n; no_spaces++)
			{
				if (no_spaces != 0)
				{
					_putchar(' ');
				}
				else
				{
					break;
				}
			}
			_putchar('\\');
			_putchar('\n');
			n--;
			if (n == 0)
			{
				break;
			}
			else
			{
				continue;
			}
		}
	}
}
