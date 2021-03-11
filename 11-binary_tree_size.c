#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root of node of the tree to measuze the size
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if (tree == NULL)
		return (tree_size);
	else
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
