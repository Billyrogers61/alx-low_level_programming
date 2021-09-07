#include "main.h"

/**
 * puts_half - function to print last half of a string.
 * @str: pointer variable.
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
