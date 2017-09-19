#include "sort.h"

/**
 * insertion_swap - function that swaps doubly linked list
 * @list: head pointer
 * Return: none
 **/
void insertion_swap(listint_t **list, listint_t *before_cursor, listint_t *cursor)
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
	listint_t *cursor, *before_cursor;

	before_cursor = *list;
	cursor = before_cursor->next;

	if (list == NULL || cursor->next == NULL)
		return;	

	while (cursor != NULL)
	{
		printf("After first while\n");
		while (cursor->prev != NULL && before_cursor->n > cursor->n)
		{
			printf("before swap\n");
			printf("%d %d\n", before_cursor->n, cursor->n);
			insertion_swap(list, before_cursor, cursor);
			if (cursor->prev != NULL)
			{
				cursor = cursor->prev;
				before_cursor = cursor->prev;
			}
			getchar();
			print_list(*list);
			printf("after print_list\n");
		}
		printf("After 2nd while\n");
		cursor = cursor->next;
		if (cursor != NULL)
			before_cursor = cursor->prev;
	}
}
