#include "main.h"

/**
 * _strncat - function to concatenate two strings but with conditions.
 * @dest: pointer variable for destination of string.
 * @src: pointer variable to the source of the string.
 * @n: no of bytes
 * Return: Character pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		if (count < n)
		{
			dest += src[count];
		}
		else
		{
			break;
		}
	}
	dest[count] = '\0';
	return (dest);
}
