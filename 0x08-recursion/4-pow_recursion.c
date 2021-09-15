#include "main.h"

/**
 * _pow_recursion - Function to find value of @x raised to the power of @y.
 * @x: number.
 * @y: power value.
 *
 * Return: -1 if @y is lower than than 0.
 *         return result of function.
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}
	else
	{
		return (-1);
	}
}
