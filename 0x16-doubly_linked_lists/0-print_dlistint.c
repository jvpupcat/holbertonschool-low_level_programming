#include "lists.h"

/**
 * print_dlistint - function that prints all elements of a dlistint_t
 * @h: pointer head
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const struct dlistint_s *temp;
	unsigned int num_nodes;

	temp = h;

	for (num_nodes = 0; temp != NULL; num_nodes++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (num_nodes);
}
