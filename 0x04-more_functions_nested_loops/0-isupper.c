#include "main.h"

/**
 * _isupper - function to check for uppercase characters.
 * @c: character to be passed in the _isupper function.
 * Return: 0 on success.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
