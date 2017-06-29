#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node at index of
 * a linked list
 * @head: double pointer that points to head
 * @index: index of node
 * Return: 1 if success, -1 if failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node, *cursor;
	unsigned int counter;

	cursor = *head;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		next_node = *head;
		*head = next_node->next;
		free(next_node);
		return (1);
	}
	for (counter = 0; cursor != NULL; counter++)
	{
		if (counter < index - 1)
		{
			cursor = cursor->next;
			if (cursor == NULL)
				return (-1);
		}
	}
	next_node = cursor->next;
	cursor->next = next_node->next;
	free(next_node);
	return (1);
}
