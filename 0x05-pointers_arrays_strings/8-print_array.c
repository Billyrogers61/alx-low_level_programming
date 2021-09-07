#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print elements of an array.
 * @a: pointer variable.
 * @n: number of elements of array to be printed.
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int x, count;

	count = 0;
	for (x = 0; x < n; x++)
	{
		count++;
		if (count == n)
		{
			printf("%d", a[x]);
		}
		else
		{
			printf("%d, ", a[x]);
		}
	}
	printf("\n");
}
