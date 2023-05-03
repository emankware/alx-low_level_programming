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
	void *ptr = malloc(b);

	if (!ptr)
	{
		void *p = malloc(sizeof(int));

		if (!p)
			exit(98);

		free(p);
		ptr = malloc(b);

		if (!ptr)
			exit(98);
	}

	return (ptr);

}
