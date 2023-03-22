#include "main.h"

/**
  * _islower - checks for lowercase character
  *
  *@c: character needs to be checked
  * Return: Returns 1 if c is lowercase, returns 0 otherwise
  */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);

}
