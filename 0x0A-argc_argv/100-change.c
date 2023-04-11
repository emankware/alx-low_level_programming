#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the minimum number of coins
 *         to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, k, j, num;
	int denominations[] = {25, 10, 5, 2, 1};
	/* Coin Denominations available */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
		/* Check for correct no. of arguments */
	}

	j = atoi(argv[1]);
	/* Converts argument to Int */
	if (j < 0)
	{
		printf("0\n");
		return (0);
		/* Check for -ve input */
	}
	k = 0;
	num = sizeof(denominations) / sizeof(denominations[0]);
	/* Number of denominations */

	for (i = 0; i < num; i++)
	{
		k += j / denominations[i];
		/* Add no of coins for current denomination */
		j %= denominations[i];
		/* What is the remaining denominations */
	}
	printf("%d\n", k); /* Minimum no of coins */
	return (0);
}
