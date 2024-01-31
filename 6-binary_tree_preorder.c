#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes trough
 * a binary tree using pre-order traversal
 * @tre: pointer to the root node of the tree to traverse.
 * @func:  a pointer to a function to call for each node.
 * The value in the node is be passed as a parameter to this function.
 */
void binary_tree_preorder(const binary_tree_t *tre, void (*func)(int))
{
	if (tre && func)
	{
		func(tre->n);
		binary_tree_preorder(tre->left, func);
		binary_tree_preorder(tre->right, func);
	}
}
