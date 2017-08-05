#include "lists.h"

/**
 * add_dnodeint - function that adds a node
 * @head: double pointer head
 * @n: variable that passes through function
 * Return: add_node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_node;

	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	if (*head == NULL)
	{
		*head = add_node;
		add_node->next = NULL;
		(*head)->prev = add_node;
	}
	else
	{
		add_node->next = *head;
		*head = add_node;
	}
	return (add_node);
}
