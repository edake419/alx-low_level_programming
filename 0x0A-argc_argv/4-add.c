#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the addition of two positive numbers.
 *atoi-converts a string to an integer
 * @argc: argument count or size of arguments.
 * @argv: argument array
 *
 * Return: int digit 
 */

int main(int argc, char **argv)
{
	int sum, i, j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
