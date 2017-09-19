#include "sort.h"

/**
 * insertion_swap - function that swaps doubly linked list
 * @list: list
 * @before_cursor: head pointer
 * @cursor: cursor
 * Return: none
 **/
void insertion_swap(listint_t **list, listint_t *before_cursor,
	listint_t *cursor)
{
	listint_t *after_cursor;

	after_cursor = cursor->next;

	before_cursor->next = after_cursor;
	cursor->next = before_cursor;
	cursor->prev = before_cursor->prev;
	if (before_cursor->prev != NULL)
	{
		before_cursor->prev->next = cursor;
	}
	if (after_cursor != NULL)
	{
		after_cursor->prev = before_cursor;
	}
	before_cursor->prev = cursor;
	if (cursor->prev == NULL)
		*list = cursor;
}

/**
 * insertion_sort_list - function that sorts a doubly linked list of int
 * @list: double pointer to list
 * Return: none
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *cursor;

	if (list == NULL)
		return;

	cursor = *list;

	while (cursor)
	{
		if (cursor->next)
		{
			if (cursor->n > cursor->next->n)
			{
				insertion_swap(list, cursor, cursor->next);
				print_list(*list);
				cursor = *list;
				continue;
			}
		}
		cursor = cursor->next;
	}
}
