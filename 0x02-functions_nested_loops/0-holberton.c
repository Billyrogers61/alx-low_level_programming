#include "main.h"
/**
 * main - print holberton
 * holberton[]: array of char that contain holberton
 *
 * Return: 0 at the end of the program.
 */
int main(void)
{
	char holberton[8] = "_putchar";
	unsigned long int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}
