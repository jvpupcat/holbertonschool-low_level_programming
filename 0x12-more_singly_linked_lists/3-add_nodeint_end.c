#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: double pointer that points to head
 * @n: constant number
 * Return: address of new element or NULL upon failure
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *former;

	former = *head;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	while (former->next != NULL)
	{
		former = former->next;
	}
	former->next = end_node;
	return (end_node);
}
