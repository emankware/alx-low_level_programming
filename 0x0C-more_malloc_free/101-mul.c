#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string length to be checked
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * remove_errors - handles and shows errors for main
 */
void remove_errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers strings
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length, i, c, dig1, dig2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		remove_errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		dig1 = s1[length1] - '0';
		c = 0;
		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			dig2 = s2[length2] - '0';
			c += result[length1 + length2 + 1] + (dig1 * dig2);
			result[length1 + length2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[length1 + length2 + 1] += c;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
