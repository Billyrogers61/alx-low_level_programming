#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: string arguments.
 *
 * Return: Always 0 success.
 */
int main(int argc, char *argv[])
{
	int count, mult, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			if (count == 1)
			{
				num1 = atoi(argv[count]);
			}
			else
				num2 = atoi(argv[count]);
		}
		mult = (num1 * num2);
		printf("%d\n", mult);
	}
	return (0);
}
