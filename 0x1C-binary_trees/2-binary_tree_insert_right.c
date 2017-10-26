#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts node to left
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL upon failure
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_noderight, *store_node;

	store_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_noderight = malloc(sizeof(binary_tree_t));
	if (new_noderight == NULL)
		return (NULL);
	new_noderight->n = value;
	new_noderight->left = NULL;
	new_noderight->right = NULL;
	new_noderight->parent = parent;
	if (parent->right != NULL)
	{
		store_node = parent->right;
		parent->right = new_noderight;
		new_noderight->right = store_node;
		store_node->parent = new_noderight;
	}
	else
		parent->right = new_noderight;
	return (new_noderight);
}
