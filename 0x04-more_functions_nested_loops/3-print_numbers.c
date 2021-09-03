#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9 then new line.
 * _putchar - ouputs on screen.
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar("\n");
}
