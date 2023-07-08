#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *str1, *str2;

	if (!ht || !(ht->array) || *key == '\0' || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	str1 = strdup(value);
	if (!str1)
		return (0);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
		{
			free(node->value);
			node->value = str1;
			return (1);
		}
		node = node->next;
	}
	str2 = strdup(key);
	if (!str2)
	{
		free(str2);
		return (0);
	}
	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->key = str2;
	node->value = str1;
	node->next = (ht->array)[index];
	(ht->array)[index] = node;
	return (1);
}
