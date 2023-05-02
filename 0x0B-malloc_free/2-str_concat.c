#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, lenA, lenB, len;
	char *result;

	lenA = lenB = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			lenA++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			lenB++;
	}

	len = lenA + lenB;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < lenA; i++)
		result[i] = s1[i];
	for (j = 0; j < lenB; j++, i++)
		result[i] = s2[j];
	result[len] = '\0';

	return (result);
}
