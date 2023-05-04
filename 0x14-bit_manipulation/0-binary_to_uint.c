#include "main.h"

/**
 * binary_to_uint -a function that converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number, or 0 incase of error
 */

unsigned int binary_to_uint(const char *b)
{
	int k = 0;
	unsigned int result = 0;

	if (!b)
		return (0);

	while (b[k] != '\0')
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);

		result = result * 2 + (*b - '0');
	}
	return (result);
}
