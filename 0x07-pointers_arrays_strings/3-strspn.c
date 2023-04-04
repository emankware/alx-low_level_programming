#include "main.h"

/**
  *  _strspn - function that gets the length of a prefix substring.
  * @s: initial segment input
  * @acccept: input
  * Return: length
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;

	while (*s)
	{
		char *k = accept;

		for (i = 0; k[i]; i++)
		{
			if (*s == k[i])
			{
				length++;
				break;
			}
			else if (k[i + 1] == '\0')
			{
				return (length);
			}
		}
		s++;
	}
	return (length);

}
