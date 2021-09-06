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
	for (x--; x >= 0; x--)
	{
		_putchar(s[x]);
	}
}
