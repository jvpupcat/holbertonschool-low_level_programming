#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer that points to head
 * Return: number of elements
 **/
size_t listint_len(const listint_t *h)
{
	unsigned int num_nodes_count;

	for (num_nodes_count = 0; h != NULL; num_nodes_count++)
	{
		h = h->next;
	}
	return (num_nodes_count);
}
