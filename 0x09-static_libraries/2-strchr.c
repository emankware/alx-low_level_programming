#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string to be used
 * @c: first occurence
 * Return: null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	{
	if (s[i] == c)
		return (s + i);
	
	else
		return (NULL);

	}
	return (0);

}
