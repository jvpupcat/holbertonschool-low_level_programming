#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value is the value to put in the new node
 * Return: pointer to the new node of NULL upon failure
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_parent;

	new_parent = malloc(sizeof(binary_tree_t));
	if (new_parent == NULL)
		return (NULL);
	new_parent->n = value;
	new_parent->left = NULL;
	new_parent->right = NULL;
	new_parent->parent = parent;
	if (parent != NULL)
	{
		if (parent->n < value)
			parent->right = new_parent;
		else
			parent->left = new_parent;
	}
	return (new_parent);
}
