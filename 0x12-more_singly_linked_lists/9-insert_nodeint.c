#include "lists.h"

/**
 *
 *
 *
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *store_head;
	unsigned int x;

	store_head = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (head == NULL || store_head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
	}
	for (x = 0; store_head != NULL; x++)
	{
		new_node->next = store_head->next;
		store_head->next = new_node;
		store_head = store_head->next;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
