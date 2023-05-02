#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function allocates memory for array of nmemb elements
 * @nmemb: The number of elements to allocate.
 * @size: The size of each element.
 * Return: If memory allocation fails or either argument is 0 - NULL,
 * otherwise - a pointer to the newly allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	b = malloc(nmemb * size);

	if (b == NULL)
		return (NULL);

	memset(b, 0, nmemb * size);

	return (b);
}
