#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of
 * a binary tree
 * @tree: a pointer to the root node of the tree to measure height
 * Return: 0 if tree is NULL, otherwise height of tree
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int max_depth;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	max_depth = binary_tree_depth(tree->parent);
	return (max_depth + 1);
}
