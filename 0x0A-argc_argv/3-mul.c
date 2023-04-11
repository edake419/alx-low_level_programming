#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiplication of two arguments.
 * @argc: size of arguments.
 * @argv: argument array
 *
 * Return: 1 if are less of 2 arguments otherwise 0.
 */
int main(int argc, char **argv)
{
	int multiply;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiply = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", multiply);
	}
	return (0);
}
