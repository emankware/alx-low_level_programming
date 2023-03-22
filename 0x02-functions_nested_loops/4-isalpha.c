#include "main.h"

/**
  * _isalpha - write a function that finds a character
  *
  *@c: character needs to be checked
  *Return: Returns 1 if c is a letter lowercase or uppercase otherwise return 0
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
