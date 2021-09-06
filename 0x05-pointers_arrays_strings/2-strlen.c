#include "main.h"

/**
 * _strlen - function to display the length of a string.
 * @s: pointer variable
 * Return: Always 0 success.
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	return (count);
}
