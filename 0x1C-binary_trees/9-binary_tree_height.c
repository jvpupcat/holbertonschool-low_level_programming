#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of
 * a binary tree
 * @tree: a pointer to the root node of the tree to measure height
 * Return: 0 if tree is NULL, otherwise height of tree
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
