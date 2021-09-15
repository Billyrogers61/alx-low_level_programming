#include "main.h"

/**
 * _strlen_recursion - Function to find the lenght of a string using recursion.
 * @s: pointer variable to the string.
 *
 * Return: length of the string @s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
