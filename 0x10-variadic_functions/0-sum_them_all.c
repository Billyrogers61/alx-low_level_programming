#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Variadic function to sum all its parameters.
 * @n: required argeument.
 *
 * Return: sum of the parameters (int).
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
