#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hashtable
 * @ht: pointer to struct
 * Return: none
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s', ", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
