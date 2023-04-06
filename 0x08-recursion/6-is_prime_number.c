#include "main.h"

int _divisible(int t, int j);

/**
  * _divisible - entry point
  * @t: input
  * @j: input
  * Return:  1 if prime number otherwise 0
 */

int _divisible(int t, int j)
{
	if (j == 1 || j == t)
		return (0);
	if (t % j == 0)
		return (1);

	return (_divisible(t, j - 1));

}


/**
  * is_prime_number - function that returns a prime number
  * @n: input
  * Return: 1 if prime number otherwise 0
  */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	if (n == 2)
	return (1);

	return (!_divisible(n, n - 1));

}
