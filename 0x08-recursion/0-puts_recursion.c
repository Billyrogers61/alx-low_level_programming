#include "main.h"

/**
 * _puts_recursion - Fuction to print a string @s followed by a new line.
 * @s: pointer variable of the string to be printed.
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
