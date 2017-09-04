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
	int flag = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (flag == 1)
			{
				printf("'%s': '%s', ", temp->key, temp->value);
				flag = 0;
			}
			else
			{
				printf(", '%s': '%s'", temp->key, temp->value);
			}
			if (temp->next != NULL)
				break;
			temp = temp->next;
		}
	}
	printf("}\n");
}
