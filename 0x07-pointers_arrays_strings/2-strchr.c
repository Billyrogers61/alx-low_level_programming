#include "main.h"

/**
 * _strchr - Function to locate a character @c in a string.
 * @c: charcter to be located.
 * @s: pointer to a string.
 *
 * Return: Pointer to the first occurence of the character @c.
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}
