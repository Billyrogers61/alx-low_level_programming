#include "main.h"

/**
 * _strncpy - Function to copy a string.
 * @dest: pointer variable to string destination.
 * @src: pointer variable to string src.
 * @n: maximum number of bytes.
 * Return: string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		if (count < n)
		{
			dest[count] = src[count];
		}
		else
		{
			break;
		}
	}
	dest[count] = '\0';
	return (0);
}
