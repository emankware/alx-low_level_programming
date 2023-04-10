#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int g = argc;
	(void) argv;

	printf("%d\n", g - 1);
	return (0);
}
