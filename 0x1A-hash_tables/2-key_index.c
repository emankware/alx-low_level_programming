#include "hash_tables.h"

/**
 * key_index - this function gets you the index of a key
 *            stored in an array of a hash table
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: index of the key
 * This function should use the hash_djb2 function
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
