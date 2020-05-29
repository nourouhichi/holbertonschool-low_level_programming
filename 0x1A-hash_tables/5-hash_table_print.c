#include "hash_tables.h"
/**
 * hash_table_print - prints the table if it is not NULL
 * @ht: the table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *roadrunner = ht->array[0];
	unsigned long int index;
	int test = 0;

	if (!ht)
		return;
	printf("{");
	for (index = 1; index < ht->size; index++)
	{
		while (roadrunner)
		{
			if (test == 1)
				printf(", ");
			printf("'%s': '%s'", roadrunner->key, roadrunner->value);
			roadrunner = roadrunner->next;
			test = 1;
		}
		roadrunner = ht->array[index];
	}
	printf("}\n");


}
