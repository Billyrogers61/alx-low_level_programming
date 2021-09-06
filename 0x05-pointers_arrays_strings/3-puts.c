#include "main.h"

/**
 * _puts - function to print out a string.
 * @str: pointer variable.
 * Return: Nothing
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
