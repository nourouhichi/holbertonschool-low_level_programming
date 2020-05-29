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
	hash_node_t *new_hash_node, *roadrunner, *tmp;
	unsigned long int index;

	if (!key || !*key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		for (tmp = ht->array[index]; tmp; tmp = tmp->next)
		{
			if (strcmp(tmp->key, key) == 0)
				return (0);
		}
		roadrunner = ht->array[index];
		new_hash_node = malloc(sizeof(hash_node_t));
		if (!new_hash_node)
			return (0);
		ht->array[index] = new_hash_node;
		new_hash_node->next = roadrunner;
		new_hash_node->key = strdup(key);
		new_hash_node->value = strdup(value);
		return (1);
	}
	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
		return (0);
	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);
	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;
	return (1);
}
