#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *roadrunner;
	hash_node_t *run;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		roadrunner = ht->array[index];
		if (roadrunner)
		{
			while (roadrunner)
			{
				run = roadrunner->next;
				free(roadrunner->key);
				free(roadrunner->value);
				free(roadrunner);
				roadrunner = run;
			}
		}
	}
	free(ht->array);
	free(ht);
}
