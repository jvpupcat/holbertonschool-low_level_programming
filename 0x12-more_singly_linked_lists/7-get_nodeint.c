#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer that points to head
 * @index: index of each node
 * Return: NULL if node doesn't exist
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_head;
	unsigned int x;

	current_head = head;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		if (current_head == NULL)
			return (NULL);
		current_head = current_head->next;
	}
	return (current_head);
}
