#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		for (count = 1; count < 11; count++);
	}
	_putchar('\n');
}
