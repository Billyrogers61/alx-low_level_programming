#include "main.h"

/**
 *_abs - computes the absolute value of intergers
 *@n: interger to be computed.
 *Description:
 *Return: 0 Always success.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (n * (+1));
	}
}
