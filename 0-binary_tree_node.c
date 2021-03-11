#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_node - Creates a new binary tree
 * @parent: pointer to the parent node of the node to create
 * @value: value to insert into the node
 * Return: NULL if fail || pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return (NULL);

	temp->parent = parent;
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;

	return (temp);
}
