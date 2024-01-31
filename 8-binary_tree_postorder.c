#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through
 * a binary tree using post-order traversal.
 * @tre: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 * The value in the node is to be passed as a parameter to this function.
 */
void binary_tree_postorder(const binary_tree_t *tre, void (*func)(int))
{
	if (tre && func)
	{
		binary_tree_postorder(tre->left, func);
		binary_tree_postorder(tre->right, func);
		func(tre->n);
	}
}
