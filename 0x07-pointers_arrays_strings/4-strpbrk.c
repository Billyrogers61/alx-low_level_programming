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
	char *z;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				z = &s[x];
				return (z);
			}
			y++;
		}
		x++;
	}
	return (0);
}
