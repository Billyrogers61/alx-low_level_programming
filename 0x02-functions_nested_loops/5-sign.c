#include "main.h"

/**
 * print_sign - Checks the sign of the argument and prints sign.
 * n : argument character to be checked out.
 * Return: 1 if n greater than 0, 0 if n is 0 and -1 if n is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
