#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer that passes through function
 * Return: number of nodes
 **/
size_t print_list(const list_t *h)
{
	const struct list_s *temp;
	unsigned int num_nodes_count;

	temp = h;

	for (num_nodes_count = 0; temp != NULL; num_nodes_count++)
	{
		printf("[%d] %s\n", temp->len, temp->str);
	}
	temp = temp->next;
	return (num_nodes_count);
}
