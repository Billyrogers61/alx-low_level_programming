#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9 then new line.
 * _putchar - ouputs on screen.
 * @num: numbers to be printed.
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		_putchar(num);
		num++;
	}
	_putchar("\n");
}
