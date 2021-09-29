#include "function_pointers.h"

/**
 * print_name - Function to print out a string name
 * @name: ponter variable to name
 * @f: function pointer
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
