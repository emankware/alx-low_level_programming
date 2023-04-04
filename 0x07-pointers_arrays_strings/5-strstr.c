#include "main.h"

/**
  * _strstr - a function that locates a substring.
  * @haystack: input
  * @needle: input
  * Return: null
  */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *s = haystack;
		char *n = needle;

		while (*n != '\0' && *s == *n)
		{
			s++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);

}



