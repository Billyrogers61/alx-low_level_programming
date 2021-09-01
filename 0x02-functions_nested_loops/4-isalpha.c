#include "main.h"

/**
 * _isalpha - Checks if the argument is an alphabetic character.
 * @c: character to be checked.
 * Return: 1 if a letter else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
