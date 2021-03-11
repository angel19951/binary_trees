#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node.
 * Where if the parent has a left child, the new node must take its place.
 * The old node must be left-child of the new node.
 * @parent: pointer to the node to insert the left-child in
 * @value: value stored in the new node
 * Return: NULL if fail or is parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		temp = parent->left;
		temp->parent = new_node;
		parent->left = new_node;
		new_node->left = temp;
	}
	return (new_node);
}
