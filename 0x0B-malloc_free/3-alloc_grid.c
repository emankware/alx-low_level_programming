#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers
 * @height: height of array
 * @width: width of array
 * Return: NULL on failure,and if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **average, i, k;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	average = (int **)malloc(sizeof(int *) * height);
	if (average == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		average[i] = (int *)malloc(sizeof(int) * width);
		if (average[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(average[i]);
			free(average);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (k = 0; k < width; k++)
			average[i][k] = 0;

	return (average);

}
