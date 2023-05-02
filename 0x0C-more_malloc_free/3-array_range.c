#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum output.
 * @max: maximum output.
 * Return: If min > max, if malloc fails return NULL
 * otherwise - the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int j;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		arr[j] = min + j;
	}

	return (arr);

}
