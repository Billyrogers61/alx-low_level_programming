#include "main.h"

/**
 * _strcmp - Function to compare two strings.
 * @s1: pointer variable to first string.
 * @s2: pointer variable to second string.
 * Return: Integer.
 */
int _strcmp(char *s1, char *s2)
{
	int count, count_1, count_2, s1_count, s2_count;

	s1_count = 0;
	s2_count = 0;

	for (count_1 = 0; s1[count_1] != '\0'; count_1++)
	{
		s1_count++;
	}
	for (count_2 = 0; s2[count_2] != '\0'; count_2++)
	{
		s2_count++;
	}
	if (s1_count > s2_count)
		count = 1;
	else if (s1_count == s2_count)
		count = 0;
	else
		count = -1;
	return (count);
}
