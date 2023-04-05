#include "main.h"

/**
  * _strlen_recursion - a function that returns the length of a string.
  * @s: string length to be calculated
  *
  * Return: length
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
