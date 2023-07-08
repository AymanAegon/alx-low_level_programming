#include "hash_tables.h"

/**
 * delete_list - deletes a linked list
 * @head: the head of a linkedlist
 *
 * Return: void
 */
void delete_list(hash_node_t *head)
{
	if (!head)
		return;
	delete_list(head->next);
	free(head->key);
	free(head->value);
	free(head);
}

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
		delete_list(ht->array[i]);
	free(ht->array);
	free(ht);
}
