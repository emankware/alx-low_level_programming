#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: The number of bytes to allocate.
 * Return: If allocation is successful,a pointer to the allocated memory.
 * Otherwise function exits with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
