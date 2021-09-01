#include "main.h"

/**
 * _islower - Checks for lowercase characters in argument.
 * @c: character to be checked.
 * Return: 1 if argument is lowercase.
 * Return: 0 if otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
	       
