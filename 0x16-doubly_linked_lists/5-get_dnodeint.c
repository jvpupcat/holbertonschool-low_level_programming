#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer head
 * @index: the index of the node
 * Return: nth node of a linked list
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	n_node = head;
	for (i = 0; i < index; i++)
	{
		if (n_node == NULL)
			return (NULL);
		n_node = n_node->next;
	}
	return (n_node);
}
