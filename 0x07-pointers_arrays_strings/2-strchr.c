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
	int count;
	char *first;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			first = &s[count];
			break;
		}
	}
	if (s[count] != c)
	{
		return (0);
	}
	else
	{
		return (first);
	}
}
