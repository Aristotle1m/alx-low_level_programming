#include "hash_tables.h"
/**
 * key_index-Gives index of a key
 * @key: location of the key
 * @size: size of the array
 * Return: return location of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
