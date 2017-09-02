#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to a struct
 * Return: none
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;

	temp = ht->array;
	while (temp != NULL)
	{
		free(temp->value);
		free(temp->key);
	}
	free(ht->array);
	free(ht);
}
