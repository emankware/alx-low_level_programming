#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array to create
 * @c: initial value to initialize with
 *
 * Return: a pointer to the array,on failure NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
		unsigned int k;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		array[k] = c;

	return (array);

}
