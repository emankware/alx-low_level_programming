#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assigns a random number to the variable
 *
 * Main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	b = n % 10;

	if (b > 5)
	{
	printf("%d and is greater than 5\n", b);
	}
	else if ((b < 6) && (b < 0))
	{
	printf("%d and is less than 6 and not 0\n", b);
	}
	else
	{
	printf("%d and is 0\n", b);
	}
	return (0);
}
