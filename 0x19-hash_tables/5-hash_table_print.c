#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hashtable
 * @ht: pointer to struct
 * Return: none
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	unsigned long int flag = 0;

	if (ht == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			flag = i;
			temp = temp->next;
		}
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s', ", temp->key, temp->value);
			if (i != flag)
				printf(", ");
			temp = temp->next;
		}
	}
	printf("}\n");
}
