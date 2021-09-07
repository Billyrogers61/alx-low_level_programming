#include "main.h"

/**
 * puts_half - function to print last half of a string.
 * @str: pointer variable.
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		int x;

		for (x = (count / 2); str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = ((count - 1) / 2); str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
		_putchar('\n');
	}
}