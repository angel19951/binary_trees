#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_weight = 0;
	int right_weight = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_weight = binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_weight = binary_tree_height(tree->right);
	return (left_weight - right_weight);
}
