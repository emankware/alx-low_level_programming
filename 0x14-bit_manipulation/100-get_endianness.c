#include "main.h"

/**
  * get_endianness - a function that checks the endianness.
  *
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	int k = 1;
	char *p = (char *)&k;

	if (*p == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
