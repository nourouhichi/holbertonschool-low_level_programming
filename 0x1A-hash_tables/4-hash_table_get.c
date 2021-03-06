#include "hash_tables.h"
/**
 * hash_table_get - gets a node
 * @ht: the table
 * @key: the key
 * Return: the value of the node
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *wanted;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	wanted = ht->array[index];
	while (wanted)
	{
		if (strcmp(wanted->key, key) == 0)
			return (wanted->value);
		wanted = wanted->next;
	}
	return (NULL);
}
