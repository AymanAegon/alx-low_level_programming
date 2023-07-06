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

	ht = malloc(sizeof(hash_table_t));
	hn = malloc(sizeof(hash_node_t) * size);
	ht->array = hn;
	return ht;
}
