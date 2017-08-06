#include "lists.h"

/**
 * Insert_at_end - function that inserts at end
 * @n: the variable that passes through function
 * Return: none
 **/
dlistint_t *Insert_at_end(int n)
{
	dlistint_t *end_node;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->prev = NULL;
	end_node->next = NULL;
	return (end_node);
}

/**
 * add_dnodeint_end - function that adds a node at the end
 * @head: pointer head
 * @n: integer
 * Return: new_node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *cursor = *head;

	end_node = Insert_at_end(n);

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = end_node;
	end_node->next = NULL;
	end_node->prev = cursor->prev;
	cursor = end_node;
	return (end_node);
}
