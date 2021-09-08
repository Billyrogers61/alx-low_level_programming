#include "main.h"

/**
 * _strncat - function to concatenate two strings but with conditions.
 * @destination: pointer variable for destination of string.
 * @source: pointer variable to the source of the string.
 * @n: no of bytes
 * Return: Character pointer to the resulting string dest.
 */
char *_strncat(char *destination, char *source, int n)
{
	char *add = destination;

	while (*destination != '\0')
	{
		destination++;
	}

	while ((*source != '\0') && n--)
	{
		*destination = *source;
		destination++;
		source++;
	}

	*destination = '\0';
	return (add);
}
