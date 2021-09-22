#include <stdio.h>

/**
 * main - Entry ppoint
 * @argc: size of argv array
 * @argv: array of size argc
 * Return: Always 0 Sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		if (i == 0)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
