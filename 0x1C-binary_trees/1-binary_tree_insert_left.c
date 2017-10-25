#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts node to left
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL upon failure
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodeleft, *store_parent;

	store_parent = parent;

	if (parent == NULL)
		return (NULL);
	new_nodeleft = malloc(sizeof(binary_tree_t));
	if (new_nodeleft == NULL)
		return (NULL);
	new_nodeleft->n = value;
	while (store_parent != NULL)
	{
		if (new_nodeleft->n < store_parent->n)
		{
			new_nodeleft->left = store_parent->left;
			store_parent->left = new_nodeleft;
			return (new_nodeleft);
		}
	}
	return (new_nodeleft);
}
