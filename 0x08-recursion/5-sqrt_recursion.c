#include "main.h"

int _get_sqrt(int x, int root);
int _sqrt_recursion(int n);

/**
  * _get_sqrt - function that will get natural square
  * @x: input
  * @root: input
  * Return: value of n or -1 if n doesn't have a natural square root
  */

int _get_sqrt(int x, int root)
{
	if ((root * root) == x)
		return (root);
	if (root == x / 2)
		return (-1);

	return (_get_sqrt(x, root + 1));

}

/**
  * _sqrt_recursion - function that returns the natural square root of a number
  * @n: interger
  *
  * Return: value of n or -1 if n doesn't have a natural square root
  */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (_get_sqrt(n, root));

}
