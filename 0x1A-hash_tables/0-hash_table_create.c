#include "hash_tables.h"

/**
 * hash_table_t - creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **hn;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL)
	hn = malloc(sizeof(*hash_node_t) * size);
	if (!hn)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hn[i] = NULL;

	ht->size = size;
	ht->array = hn;
	return (ht);
}
