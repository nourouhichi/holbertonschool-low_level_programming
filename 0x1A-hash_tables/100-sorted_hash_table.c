#include "hash_tables.h"
/**
 * shash_table_create - creates a table
 * @size: the size of the table
 * Return: a pointer
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (!table->array)
		return (NULL);
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}
/**
 * shash_table_set - sets the table
 * @ht: the table
 * @key: ..
 * @value: ..
 * Return:int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *roadrunner;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	static shash_node_t *sorted_head = NULL;
	shash_node_t *new;

	if (!ht || !key || !*key || !value)
		return (0);
	roadrunner = ht->array[index];
	while (roadrunner)
	{
		if (strcmp(roadrunner->key, key) == 0)
		{
			free(roadrunner->value);
			roadrunner->value = strdup(value);
			return (1);
		}
		roadrunner = roadrunner->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (!new->key || !new->value)
		return (0);
	new->snext = ht->array[index];
	ht->array[index] = new;
	ht->shead = sort(&sorted_head, key,  value);
	ht->stail = last(&sorted_head);
	return (1);
}
/**
 * sort - sorts the table according to ascii value
 * @key: ..
 * @value: ..
 * @head: the head of the new linked list
 * Return: pointer
 */
shash_node_t *sort(shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *roadrunner, *new = malloc(sizeof(shash_node_t));
	shash_node_t *run, *bowl;
	int i = 0,  j = 0;

	if (!head || !key || !value || !new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	if (!new->key || !new->value)
		return (0);
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	roadrunner = *head;
	if ((int) roadrunner->key[0] > (int) key[0])
	{
		*head = new;
		new->snext = roadrunner;
		roadrunner->sprev = new;
		return (*head);
	}
	do {
		if ((int) roadrunner->key[0] < (int) key[0])
			i++;
		roadrunner = roadrunner->snext;
		j++;
	} while (roadrunner);
	run = *head;
	for (j = 0; j < i - 1 ; j++)
		run = run->snext;
	bowl = run->snext;
	run->snext = new;
	new->sprev = run;
	new->snext = bowl;
	if (bowl)
		bowl->sprev = new;
	return (*head);
}
/**
 * last - parse the linked list to its end
 * @head: its head
 * Return: the last node address
 */
shash_node_t *last(shash_node_t **head)
{
	shash_node_t *roadrunner = *head;

	if (!head)
		return (NULL);
	while (roadrunner && roadrunner->snext)
	{
		roadrunner = roadrunner->snext;
	}
	return (roadrunner);
}
/**
 * shash_table_get - gets a value
 * @ht: the table
 * @key: ..
 * Return: pointer
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *wanted;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	wanted = ht->array[index];
	while (wanted)
	{
		if (strcmp(wanted->key, key) == 0)
			return (wanted->value);
		wanted = wanted->snext;
	}
	return (NULL);
}
/**
 * shash_table_print - prints a table
 * @ht: the table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *roadrunner;
	int test = 0;

	if (!ht)
		return;
	printf("{");
	roadrunner = ht->shead;
	while (roadrunner)
	{
		if (test == 1)
			printf(", ");
		printf("'%s': '%s'", roadrunner->key, roadrunner->value);
		roadrunner = roadrunner->snext;
		test = 1;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints the atble in reverse
 * @ht: the table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *roadrunner;
	int test = 0;

	if (!ht)
		return;
	printf("{");
	roadrunner = ht->stail;
	while (roadrunner)
	{
		if (test == 1)
			printf(", ");
		printf("'%s': '%s'", roadrunner->key, roadrunner->value);
		roadrunner = roadrunner->sprev;
		test = 1;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a table
 * @ht: the table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *roadrunner;
	shash_node_t *run;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		roadrunner = ht->array[index];
		if (roadrunner)
		{
			while (roadrunner)
			{
				run = roadrunner->snext;
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
