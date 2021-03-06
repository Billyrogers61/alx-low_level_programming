#include "main.h"

/**
 * string_toupper - Function to convert lowercase characters to uppercase.
 * @s: pointer variable.
 * Return: character.
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if ((s[count] >= 'a') && (s[count] <= 'z'))
		{
			s[count] = (s[count] - 32);
		}
		count++;
	}
	return (s);
}
