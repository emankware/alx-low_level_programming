#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to the bit
 * @index: The index to set the value at - indices start at 0
 * Return: -1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n & ~(1UL << index)) | ((0 << index) & (1UL << index));
	return (1);
}
