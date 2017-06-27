#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer that needs to be free'd
 * Return: none
 **/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
