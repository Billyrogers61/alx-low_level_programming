#include "main.h"

/**
 * *_memset - function that fills the first @n bytes of the memory area
 *            pointed to by @s with the constant byte @b.
 * @s: Apointer to the memoy area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: Apointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
