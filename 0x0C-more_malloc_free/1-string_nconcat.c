#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: - string 1
 * @s2: - string 2
 * @n: number of bytes to be allocated
 * Return: Null if fail, pointer to new allocated
 *spacespace containing s1 and 1st n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int length = n, y;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (y = 0; s1[y]; y++)
		length++;

	result = malloc(sizeof(char) * (length + 1));

	if (result == NULL)
		return (NULL);

	length = 0;

	for (y = 0; s1[y]; y++)
		result[length++] = s1[y];

	for (y = 0; s2[y] && y < n; y++)
		result[length++] = s2[y];

	result[length] = '\0';

	return (result);
}
