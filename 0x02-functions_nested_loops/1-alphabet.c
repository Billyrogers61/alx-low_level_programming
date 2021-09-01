#include "main.h"

/**
 * main - Function print alphabets
 * 
 * Return: Always 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 65; letter < 91; letter++)
	{
		_putchar(letter);
	}
	_putchar("\n");
	return (0);
}
	       
	     
