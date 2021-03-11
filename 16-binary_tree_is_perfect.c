#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root of the node to check
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (abs(left - right) <= 1 && binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}

/**
 * abs - finds the absolute value of a number
 * @i: number to look for absolute value
 * Return: Absolute value of i
 */
int abs(int i)
{
	return (i < 0 ? -i : i);
}
