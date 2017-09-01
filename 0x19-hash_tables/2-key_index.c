#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: key
 * @size: size of the array
 * Return: index of key/value pair
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
