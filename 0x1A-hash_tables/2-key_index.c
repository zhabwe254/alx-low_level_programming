#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table
 * @key: Key to get index for
 * @size: Size of the array in the hash table
 *
 * Return: Index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
