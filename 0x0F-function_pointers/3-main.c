#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: arguments
 * @argv: array of args
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int i;
		int j;
		int (*func)(int, int);

		i = atoi(argv[1]);
		j = atoi(argv[3]);
		func = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && j == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(i, j));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
