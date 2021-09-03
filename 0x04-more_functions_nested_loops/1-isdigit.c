#include "main.h"

/**
 * _isdigit - function checks for digit (0 through 9)
 * @c: digit to be checked.
 *
 * Return: 1 0n success 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
