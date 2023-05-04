#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int
* @b: pointer to a string with the binary number.
* Return: the converted number, or 0 incase of error
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int numb;

	numb = 0;
	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		numb <<= 1;
		if (b[i] == '1')
		{
			numb += 1;
		}
	}
	return (numb);
}
