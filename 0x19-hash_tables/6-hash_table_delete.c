#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to a struct
 * Return: none
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *node;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			node = temp;
			free(temp->value);
			free(temp->key);
			free(node);
			temp = temp->next;
		}
	}
	free(ht->array);
	free(ht);
}
