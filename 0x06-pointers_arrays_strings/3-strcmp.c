#include "main.h"

/**
 * _strcmp - Function to compare two strings.
 * @s1: pointer variable to first string.
 * @s2: pointer variable to second string.
 * Return: Integer.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
