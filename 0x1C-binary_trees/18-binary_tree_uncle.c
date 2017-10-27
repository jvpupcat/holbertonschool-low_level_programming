#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find uncle
 * Return: NULL if node is NULL or NULL if node has no uncle
 **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->right->left == node)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
