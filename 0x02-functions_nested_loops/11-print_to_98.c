#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function to output integer numbers from a given number to 98.
 * @n: given number (starting number).
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d\n", n);
			break;
		}
	}

	while (n >= 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d\n", n);
			break;
		}
	}
}
