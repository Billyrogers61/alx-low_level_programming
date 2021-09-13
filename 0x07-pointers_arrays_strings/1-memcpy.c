#include "main.h"

/**
 * _memcpy - function that copies the first @n bytes of the memory area
 *           pointed to by the @src to the memory area pointed to by the @dest
 * @src: A pointer to the memory area to be copied.
 * @dest: A pointer to the destination of the copied bytes.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to the copied memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
