#include "main.h"

/**
 * binary_to_uint - it converts number to unsigned int
 * @b: the pointer to a string with binary number
 * Return: unsiigned int with decimal value of number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int num;

	num = 0;
	if (!b)
	{
		return (0);
	}

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		{
			return (0);
		}
	}

	for (k = 0; b[k] != '\0'; k++)
	{
		numb <<= k;
		if (b[k] == '1')
		{
			numb += 1;
		}
	}
	return (numb);

}

