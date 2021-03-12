#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 * Return: 0 if node not root or is NULL, 1 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node != NULL && node->parent == NULL);
}
