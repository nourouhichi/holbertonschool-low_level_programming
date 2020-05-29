#include "hash_tables.h"
/**
 * hash_table_get - gets a node
 * @ht: the table
 * @key: the key
 * Return: the value of the node
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *wanted = ht->array[index];

	if (!ht || !key || !wanted || !*key)
		return (NULL);
	while (wanted)
	{
		if (strcmp(wanted->key, key) == 0)
			return (wanted->value);
		wanted = wanted->next;
	}
	return (NULL);
}
