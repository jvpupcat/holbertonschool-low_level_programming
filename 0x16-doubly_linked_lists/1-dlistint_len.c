#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer head
 * Return: number of elements
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const struct dlistint_s *temp;
	unsigned int num_nodes;

	temp = h;

	for (num_nodes = 0; temp != NULL; num_nodes++)
	{
		temp = temp->next;
	}
	return (num_nodes);
}
