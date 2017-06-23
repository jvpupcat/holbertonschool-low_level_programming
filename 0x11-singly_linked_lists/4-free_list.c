#include "lists.h"

/**
 * free_list - function that free a list
 * @head: pointer that points to head
 * Return: none
 **/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free (temp->str);
		free (temp);
	}
}
