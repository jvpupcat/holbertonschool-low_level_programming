#include "lists.h"

/**
 * sum_listint - function that returns the sum of n of a linked list
 * @head: pointer that points to head
 * Return: sum
 **/
int sum_listint(listint_t *head)
{
	int store_num, sum;
	listint_t *store_head;

	store_head = head;

	for (sum = 0; store_head != NULL; )
	{
		store_num = store_head->n;
		sum += store_num;
		store_head = store_head->next;
	}
	return (sum);
}
