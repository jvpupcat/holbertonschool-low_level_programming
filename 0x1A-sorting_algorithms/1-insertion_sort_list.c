#include "sort.h"

/**
 * insertion_swap - function that swaps doubly linked list
 * @list: head pointer
 * Return: none
 **/
void insertion_swap(listint_t **cursor, listint_t **after_cursor)
{
	listint_t *after_after;

	cursor = *list;
	after_cursor = cursor->next;
	after_after = after_cursor->next;

	while (cursor->next != NULL)
	{
		cursor->next = after_after;
		after_cursor->next = cursor;
		after_cursor->prev = cursor->prev;
		cursor->prev->next = after_cursor;
		after_after->prev = cursor;
		cursor->prev = after_cursor;
	}
}

/**
 * insertion_sort_list - function that sorts a doubly linked list of int
 * @list: double pointer to list
 * Return: none
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *cursor, *after_cursor, *after_after;

	cursor = *list;
	after_cursor = cursor->next;
	after_after = after_cursor->next;

	if (list == NULL || list->next == NULL)
		return;	

	while (cursor->next != NULL)
	{
		if (after_cursor->n < cursor->n)
		{
			insertion_swap(cursor, after_cursor)
			while (after_cursor->n > cursor->n)
				insertion_swap(after_cursor, cursor);
		}
		cursor = cursor->next;
	}
}
