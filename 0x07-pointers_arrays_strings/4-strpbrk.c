#include "main.h"

/**
 * _strpbrk - Function to lacate the first occurrence in a string @s of any of
 *            any of the bytes in the string @accept.
 * @s: string to look into the possibilities of an occurence.
 * @accept: string to look from.
 *
 * Return: Pointer to the byte in @s that matches one of the bytes in accept or
 *         NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char var;
	char *first;

	first = &var;

	for (x = 0; s[x] != '\0'; x++)
	{
		y = 0;
		while (accept[y] != '\0' && s[x] == accept[y])
		{
			var += s[x];
		}
		y++;
	}
	return (first);
}
