#include "main.h"
/**
 * main - print holberton
 * holberton[]: array of char that contain holberton
 *
 * Return: 0 at the end of the program.
 */
int main()
{
	char holberton[9] = "Holberton";
	unsigned long int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}	
