#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *_realloc -  function that reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previsouly allocated by malloc
 *@old_size: unsigned int
 *@new_size: unsigned int
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr;
	char *ptr1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);

	if (!ptr1)
		return (NULL);
	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)

	{
		for (i = 0; i < old_size; i++)
		ptr1[i] = old_ptr[i];
	}
	free(ptr);

	return (ptr1);
}
