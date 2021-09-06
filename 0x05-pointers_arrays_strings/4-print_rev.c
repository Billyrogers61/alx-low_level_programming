#include "main.h"

/**
 * print_rev - function to print string in reverse.
 * @s: pointer variable.
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	x--;
	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
