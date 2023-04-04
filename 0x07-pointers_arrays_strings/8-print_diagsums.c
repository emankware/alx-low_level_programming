#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - function that prints the sum
  * of the two diagonals of a square matrix
  * @a: interger
  * @size: ixe of the arrays
  * Return: Always 0 (success)
  */

void print_diagsums(int *a, int size)
{
	int i, j, k, l = 0, m = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + 1;
			 l += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		m += *(a + k);
	}
	printf("%i, %i\n", l, m);



}
