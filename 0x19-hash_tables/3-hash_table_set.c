#include "hash_tables.h"

/**
 * add_hashnode - function that adds a new node
 * @key: key
 * @value: value
 * Return: new_node
 **/
hash_table_t *add_hashnode(const char *key, const char *value)
{
	hash_table_t *new_node;

	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table that needs to be added or updated
 * @key: key
 * @value: value
 * Return: 1 upon success, 0 upon failure
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *new_node, *current, *new_value;
	int index, temp = 0;

	if (ht == NULL || key == NULL || value == NULL || ht->array == NULL)
		return (0);
	index = key_index(((unsigned char *)key), ht);
	new_node = add_hashnode(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array = new_node;
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				free(new_node->value);
				free(new_node->key);
				free(new_node);
				return (1);
			}
			temp = temp->next;
		}
	}
	return (1);
}
