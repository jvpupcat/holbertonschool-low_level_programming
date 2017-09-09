#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to a struct
 * Return: none
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *node;
	int i = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = ht->size - 1; i >= 0; i--)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			node = temp;
			temp = temp->next;
			free(node->value);
			free(node->key);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
