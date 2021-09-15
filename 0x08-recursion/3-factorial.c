#include "main.h"

/**
 * factorial - Function to find the factorial of number @n.
 * @n: Number given.
 *
 * Return: -1 when n is lower than 0
 *         otherwise return interger number.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * (factorial(n - 1)));
	}
	else
	{
		return (-1);
	}
}
