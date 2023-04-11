#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int k;
	int j;
	int a = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (k = 1; k < argc; k++)
	{
		for (j = 0; argv[k][j]; j++)
		{
			if (argv[k][j] < '0' || argv[k][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		a += atoi(argv[k]);
	}
	printf("%d\n", a);
	return (0);
}
