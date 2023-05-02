#include "main.h"

int checker_palindrome(char *s, int i, int len);
int finder_len(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker_palindrome(s, 0, finder_len(s)));
}

/**
 * finder_len - finds the length of a string
 * @s: string to find the length of
 *
 * Return: length of the string
 */
int finder_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + finder_len(s + 1));
}

/**
 * checker_palindrome - function that checks the characters for palindrome
 * @s: this is the string to check
 * @k: my iterator
 * @len: this is thelength of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int checker_palindrome(char *s, int k, int len)
{
	if (*(s + k) != *(s + len - 1))
		return (0);
	if (k >= len)
		return (1);
	return (checker_palindrome(s, k + 1, len - 1));
}
