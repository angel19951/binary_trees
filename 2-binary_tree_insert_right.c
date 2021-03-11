#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * of another node.
 * Where if the parent has a right child, the new node must take its place.
 * The old node must be right child of the new node.
 * @parent: pointer to the node to insert the right-child in
 * @value: value stored in the new node
 * Return: NULL if fail or is parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		temp = parent->right;
		temp->parent = new_node;
		parent->right = new_node;
		new_node->right = temp;
	}
	return (new_node);
}
