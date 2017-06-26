#include "lists.h"

/**
 * print_listint - function that prints all elements of listint_t list
 * @h: pointer that points to head
 * Return: number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	unsigned int num_nodes_count;

	for (num_nodes_count = 0; h != NULL; num_nodes_count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes_count);
}
