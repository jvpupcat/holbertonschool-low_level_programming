#include "lists.h"

/**
 * add_dnodeint_end - function that adds a node at the end
 * @head: pointer head
 * @n: integer
 * Return: new_node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *cursor = *head;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	if (*head == NULL)
	{
		*head = end_node;
		end_node->next = NULL;
		return (end_node);
	}
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = end_node;
	end_node->next = NULL;
	return (end_node);
}
