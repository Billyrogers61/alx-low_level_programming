#include "main.h"

/**
 * *_strcpy - pointer function to copy string.
 * @dest: pointer variable.
 * @src: pointer variable.
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	x = 0;
	while (x >= 0)
	{
		*dest += src[x];
		x++;
	}
	return (dest);
}
