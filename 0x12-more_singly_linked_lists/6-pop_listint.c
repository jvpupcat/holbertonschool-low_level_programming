#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: double pointer that points to head
 * Return: 0 if list is empty
 **/
int pop_listint(listint_t **head)
{
	listint_t *store_next;
	int store_num;

	if (head == NULL || *head == NULL)
		return (0);
	store_num = (*head)->n;
	store_next = (*head)->next;
	free(*head);
	*head = store_next;
	return (store_num);
}
