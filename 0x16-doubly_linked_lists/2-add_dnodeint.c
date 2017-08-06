#include "lists.h"

/**
 * Insert_at_head - function that inserts at head
 * @n: the variable that passes through function
 * Return: none
 **/
dlistint_t *Insert_at_head(int n)
{
	dlistint_t *add_node;

	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->prev = NULL;
	add_node->next = NULL;
	return (add_node);
}

/**
 * add_dnodeint - function that adds a node
 * @head: double pointer head
 * @n: variable that passes through function
 * Return: add_node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_node;

	add_node = Insert_at_head(n);

	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
	}
	(*head)->prev = add_node;
	add_node->next = *head;
	*head = add_node;
	return (add_node);
}
