#include "hash_tables.h"
/**
 * key_index - calculates the index of a key with the appropriete alogorithm
 * @key: the key
 * @size: the size of the tabele
 * Return:  the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
