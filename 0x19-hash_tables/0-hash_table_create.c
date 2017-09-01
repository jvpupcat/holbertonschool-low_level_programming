#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the hash table or NULL
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	if (size <= 0)
		return (NULL);
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->array = calloc(size, sizeof(hash_node_t *));
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	hashtable->size = size;
	return (hashtable);
}
