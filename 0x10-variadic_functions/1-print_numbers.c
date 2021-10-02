#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Variadic function to print numbers taken in as parameters.
 * @separator: variable string to be printed between the numbers.
 * @n: Number of intergers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap,n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n-1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
