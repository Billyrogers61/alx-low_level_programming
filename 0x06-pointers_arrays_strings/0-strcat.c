#include "main.h"

/**
 * _strcat - function to concatenate two strings but with conditions.
 * @dest: pointer variable to destination of string.
 * @src: pointer variable to the source of string.
 * Return: Character.
 */
char *_strcat(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		dest += src[count];
	}
	dest[count] = '\0';
	return (dest);
}
