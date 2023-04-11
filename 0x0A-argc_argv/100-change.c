#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the min numbers of coins per given ammount of money.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: 0 success 1 failure.
 */

int main(int argc, char *argv[])
{
	int coins, i, total;
	int num[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);
	total = 0;

	if (coins < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && coins >= 0; i++)
	{
		while (coins >= num[i])
		{
			total++;
			coins -= num[i];
		}
	}

	printf("%d\n", total);
	return (0);
}
}
