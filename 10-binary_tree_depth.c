#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if tree os NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (node_depth);

	node_depth = binary_tree_depth(tree->parent) + 1;

	return (node_depth);
}
