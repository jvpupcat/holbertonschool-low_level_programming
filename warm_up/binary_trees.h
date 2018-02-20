#ifndef BINARY_TREES
#define BINARY_TREES
#include <stdio.h>
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
int binary_tree_is_full(const binary_tree_t *tree);

#endif
