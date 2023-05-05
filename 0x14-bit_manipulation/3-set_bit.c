#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: index at which to set bit
 * Return: 1 if it worked, -1 if error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
