#include "main.h"

/**
* set_bit - function that sets the value of a bit to 1 at a given index.
* @n: the number to set.
* @index: the index at which to set a bit.
* Return: 1 if it works or -1 if error.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= 1UL << index;
	return (1);
}
