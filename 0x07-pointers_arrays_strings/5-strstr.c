#include "main.h"

/**
 * _strstr - Function to find the first occurence of the substring @needle in
 *           the string @haystack.
 * @needle: sub string to be checked in @haystack
 * @haystack: string
 *
 * Return: Pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *needlestr = needle;

		while (*needlestr == *haystack && *needlestr != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			needlestr++;
		}
		if (*needlestr == '\0')
			return (start);
		haystack = start + 1;
	}
	return ('\0');
}
