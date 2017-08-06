#include "lists.h"

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
	dlistint_t *insert, *temp;
	unsigned int i;

	temp = *h;

	insert = malloc(sizeof(dlistint_t));
	if (insert == NULL)
		return (NULL);
	insert->n = n;
	if (h == NULL || temp == NULL)
		return (NULL);
	if (idx == 0)
	{
		insert->next = *h;
		*h = insert;
		return (*h);
	}
	for (; temp != NULL;)
	{
		if (i == idx - 1)
		{
			insert->next = temp->next;
			temp->next = insert;
			return (insert);
		}
		temp = temp->next;
		i++;
	}
	free(insert);
	return (NULL);
}
