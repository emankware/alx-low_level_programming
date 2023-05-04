#include "main.h"

/**
 * print_binary - function that prints the binary representation of a No.
 * @n: The number to be converted and printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
