#include "main.h"

/**
* get_bit - function that returns the value of a bit at a given index.
* @n: number to check the bits.
* @index: index at which to check the bit.
* Return: value of the bit or, -1 if error.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* index out of range */
	}

	return ((n >> index) & 1);
}
