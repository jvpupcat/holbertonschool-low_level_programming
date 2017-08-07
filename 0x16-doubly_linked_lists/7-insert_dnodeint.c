#include "lists.h"

/**
 * create_node - function that creates a node
 * @n: variable that passes through function
 * Return: insert_at
 **/
dlistint_t *create_node(int n)
{
	dlistint_t *insert_at;

	insert_at = malloc(sizeof(dlistint_t));
	if (insert_at == NULL)
		return (NULL);

	insert_at->n = n;
	insert_at->prev = NULL;
	insert_at->next = NULL;
	return (insert_at);
}

/**
 * insert_dnodeint_at_index - function that inserts a node at a given
 * position
 * @h: pointer head
 * @idx: index of the list
 * @n: data
 * Return: address of the new node
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert, *temp, *store_next;
	unsigned int before_idx;

	before_idx = 0;
	temp = *h;

	insert = create_node(n);
	if (insert == NULL)
		return (NULL);

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		insert->next = *h;
		*h = insert;
		return (*h);
	}
	while (temp->next != NULL)
	{
		if (before_idx == idx - 1)
		{
			store_next = temp->next;
			temp->next = insert;
			insert->prev = temp;
			insert->next = store_next;
			store_next->prev = insert;
		}
		temp = temp->next;
		before_idx++;
	}
	if (temp->next == NULL && before_idx + 1 == idx)
	{
		temp->next = insert;
		insert->prev = temp;
		insert->next = NULL;
		return (insert);
	}
	return (NULL);
}
