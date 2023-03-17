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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
	printf("%d 0 is greater than 5\n", n);
	}
	else if ((n < 6) && (n < o))
	{
	printf("%d is less than 6 and not 0\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
