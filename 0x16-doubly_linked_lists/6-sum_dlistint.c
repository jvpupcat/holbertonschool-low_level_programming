#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data of
 * a linked list
 * @head: pointer head
 * Return: sum of a linked list
 **/
int sum_dlistint(dlistint_t *head)
{
	unsigned int n = 0, total = 0;
	dlistint_t *temp_head;


	for (temp_head = head; temp_head != NULL;)
	{
		n = temp_head->n;
		total = total + n;
		temp_head = temp_head->next;
	}
	return (total);
}
