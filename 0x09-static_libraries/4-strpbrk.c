#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @s: first string  occurence
 * @accept: input
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *b = accept;

		while (*b)
		{
			if (*s == *b)
			{
				return (s);
			}
			b++;
		}
		s++;
	}
	return (NULL);

}












