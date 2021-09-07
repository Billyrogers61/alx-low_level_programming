#include "main.h"

/**
 * _strcpy - pointer function to copy string.
 * @dest: pointer variable.
 * @src: pointer variable.
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';
	return (dest);
}
