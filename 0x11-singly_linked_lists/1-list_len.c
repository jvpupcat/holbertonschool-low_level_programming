#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: points to a node
 * Return: returns number of elements upon success
 **/
size_t list_len(const list_t *h)
{
	const struct list_s *temp;
	unsigned int num_nodes_count;

	temp = h;

	for (num_nodes_count = 0; temp != NULL; num_nodes_count++)
	{
		temp = temp->next;
	}
	return (num_nodes_count);
}
