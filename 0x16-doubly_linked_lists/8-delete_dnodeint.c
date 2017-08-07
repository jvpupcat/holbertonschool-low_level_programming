#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node at index
 * @head: pointer head
 * @index: index of the node that should be deleted
 * Return: 1 upon success, -1 if failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *position, *delete_node;
	unsigned int i;

	i = 0;
	position = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		delete_node = *head;
		*head = delete_node->next;
		delete_node->prev = NULL;
		free(delete_node);
		return (1);
	}
	while (position != NULL)
	{
		if (i == index - 1)
		{
			delete_node = position->next;
			position->next = delete_node->next;
			delete_node->next->prev = position;
			free(delete_node);
		}
		position = position->next;
		i++;
		if (position == NULL)
			return (-1);
	}
	if (position->next == NULL)
		return(-1);
	return (1);
}
