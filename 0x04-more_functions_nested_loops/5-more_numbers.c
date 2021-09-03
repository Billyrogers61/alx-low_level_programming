#include "main.h"

/**
 * more_numbers - function to output numbers 0 to 14 ten times.
 * Return: Nothing.
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count < 10; count++)
	{
		num = 0;
		while (num < 15)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
			num++;
		}
		_putchar('\n');
	}
}
