#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function to find sum of two diagnols of square matrix.
 * @a: pointer matrix.
 * @size: size of matrix.
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int x, sum, sizer;

	x = 0;
	sum = 0;
	sizer = size * size;
	while (x < sizer)
	{
		if (x % (size + 1) == 0)
			sum += a[x];
		x++;
	}
	printf("%d, ", sum);

	sum = 0;
	x = 0;

	while (x < sizer)
	{
		if (x % (size - 1) == 0 && x != (sizer - 1) && x != 0)
		{
			sum += a[x];
		}
		x++;
	}
	printf("%d\n", sum);
}
