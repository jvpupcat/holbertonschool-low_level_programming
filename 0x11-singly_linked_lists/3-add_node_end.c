#include "lists.h"

/**
 * _strlen - function that counts the length of the string
 * @str: pointer that points to string
 * Return: count of string
 **/
int _strlen(const char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;
	return (x);
}

/**
 * add_node_end - function that adds a node at the end of a linked list
 * @head: pointer of a pointer
 * @str: pointer that points to a constant string
 * Return: address of the new element
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *cursor = *head;
	unsigned int len;

	len = _strlen(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	while (cursor->next != NULL)
	{
		cursor = cursor->next;
	}
	cursor->next = new_node;
	new_node->next = NULL;
	return (new_node);
}
