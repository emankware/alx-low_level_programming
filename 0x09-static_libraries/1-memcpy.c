#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @dest: memory area tobe copied to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);

}


