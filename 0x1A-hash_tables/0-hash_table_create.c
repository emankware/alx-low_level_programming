#include "hash_tables.h"

/**
 * hash_table_create -this function creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table || NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtble = NULL;

	if (size == 0)
		return (NULL);
	new_hashtble = malloc(sizeof(hash_table_t));
	if (!new_hashtble)
		return (NULL);

	new_hashtble->size = size;
	new_hashtble->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (new_hashtble->array == NULL)
		return (NULL);

	return (new_hashtble);
}
