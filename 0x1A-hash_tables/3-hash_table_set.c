#include "hash_tables.h"
/**
 * hash_table_set - adds a node
 * @ht: teh table
 * @key: the key
 * @value: the value
 * Return: o or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_node, *roadrunner;
	unsigned long int index;

	if (!key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		roadrunner = ht->array[index];
		while (roadrunner && roadrunner->next)
		{
			roadrunner = roadrunner->next;
		}
		new_hash_node = malloc(sizeof(hash_node_t));
		if (!new_hash_node)
			return (0);
		new_hash_node->key = strdup(key);
		new_hash_node->value = strdup(value);
		roadrunner->next = new_hash_node;
		return (1);
	}
	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
		return (0);
	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);
	ht->array[index] = new_hash_node;
	return (1);
}
