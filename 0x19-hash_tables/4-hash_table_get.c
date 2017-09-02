#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: pointer to hash_table struct
 * @key: key
 * Return: value associated with the element or NULL if key not found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index(((unsigned char *)key), ht->size);
	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
