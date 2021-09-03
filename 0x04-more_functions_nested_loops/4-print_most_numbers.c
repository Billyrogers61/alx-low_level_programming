#include "main.h"

/**
 * print_most_numbers - function to print numbers 0 to 9 except 2 and 4.
 * Return: Nothing to return.
 */
void print_most_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		if (num == 2 || num == 4)
		{
			num++;
			continue;
		}
		else
		{
			_putchar(num + '0');
			num++;
		}
	}
	_putchar('\n');
}
