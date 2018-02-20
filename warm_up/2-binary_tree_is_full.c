#include "binary_trees.h"

/**
 * binary_tree_is_full - determines if tree is full
 * @tree: pointer to root node
 * Return: 1 upon success, 0 if failed
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_occ = 0; /*occ = occupied*/
	int right_occ = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	else if ((tree->left != NULL) && (tree->right == NULL))
		return (0);
	else /*tree->left == NULL && tree->right != NULL*/
		return (0);

	left_occ = binary_tree_is_full(tree->left);
	right_occ = binary_tree_is_full(tree->right);

	if (left_occ && right_occ)
		return(1);
	else
		return(0);
}
