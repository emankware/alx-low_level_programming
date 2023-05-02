#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of allocted byte
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *d = malloc(b);

	if (d == NULL)
	{
		exit(98);
	}
	return (d);
}
