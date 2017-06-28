#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a node in a linked list
 * @head: double pointer that points to head
 * @idx: index of nodes
 * @n: data in each node
 * Return: address of new node or NULL if failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *store_head;
	unsigned int x;

	store_head = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	for (x = 0; store_head != NULL; x++)
	{
		if (x == idx - 1)
		{
			new_node->next = store_head->next;
			store_head->next = new_node;
			return (new_node);
		}
		store_head = store_head->next;
	}
	if (idx > x)
		free(new_node);
	return (NULL);
}
