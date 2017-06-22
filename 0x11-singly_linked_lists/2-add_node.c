#include "lists.h"

/**
 * _strlen - function that counts the length of string
 * @str: string that passes through function
 * Return: the length of string
 **/
int _strlen(const char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer that points to *head
 * @str: string that passes through function
 * Return: new_node;
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	len = _strlen(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
