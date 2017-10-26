#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts node to left
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL upon failure
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodeleft, *store_node;

	store_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_nodeleft = malloc(sizeof(binary_tree_t));
	if (new_nodeleft == NULL)
		return (NULL);
	new_nodeleft->n = value;
	new_nodeleft->left = NULL;
	new_nodeleft->right = NULL;
	new_nodeleft->parent = parent;
	if (parent->left != NULL)
	{
		store_node = parent->left;
		parent->left = new_nodeleft;
		new_nodeleft->left = store_node;
		store_node->parent = new_nodeleft;
	}
	else
		parent->left = new_nodeleft;
	return (new_nodeleft);
}
