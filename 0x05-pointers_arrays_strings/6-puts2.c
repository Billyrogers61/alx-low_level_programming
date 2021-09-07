#include "main.h"

/**
 * puts2 - function to print every character of a string.
 * @str: pointer variable.
 * Return: Nothing.
 */
void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
