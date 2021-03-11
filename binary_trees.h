#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_
#include <stdio.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};


/*----------Basic Binary Tree-----------*/
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/*--------Functions for tasks ----------*/

/* 0-Create a new binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* 1-Inserts a node as the left-child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* 2-Inserts a node as the right-child of another node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* 3-Deletes entire binary tree */
void binary_tree_delete(binary_tree_t *tree);

/* 4-Checks if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* 5-Checks if a node is root */
int binary_tree_is_root(const binary_tree_t *node);

/* 6-Goes through binary tree using pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* 7-Goes through binary tree using in-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* 8-Goes through binary tree using post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* 9-Measures the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* 10-Measures the depth of a node in a binary tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/* 11-Measures the size of the binary tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* 12-Counts the leaves in a binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* 13-Counts nodes with at least 1 child in a binary tree */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* 14-Measures the balance factor of a binary tree */
int binary_tree_balance(const binary_tree_t *tree);

/* 15-Checks if a binary tree is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* 16-Checks if a binary tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);
/* 16-Helper function to find absolute value */
int abs(int i);

/* 17-Finds the sibbling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* 18-Finds the uncle of a node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);


/* Prints a binary tree */
void binary_tree_print(const binary_tree_t *);


#endif /* _BINARY_TREES_H_ */
