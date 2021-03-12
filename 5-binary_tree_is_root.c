#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 * Return: 0 if node not root or is NULL, 1 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	else if (node == NULL)
		return (0);
	else if (node->left == NULL || node->right == NULL)
		return (0);
	else
		return (0);
}
