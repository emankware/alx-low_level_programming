#include "main.h"
#include <string.h>

/**
  * print_rev - prints string in reverse
  * @s: character to be executed
  *
  */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}



