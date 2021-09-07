#include "main.h"

/**
 * rev_string - function to reverse a string.
 * @s: pointer variable.
 * Return: Nothing.
 */
void rev_string(char *s)
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
