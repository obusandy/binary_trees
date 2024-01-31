#include "binary_trees.h"

/**
 * binary_tree_inorder -  a function that goes trough a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node.
 * The value in the node is be passed as a parameter to this function.
 *
 * */
void binary_tree_inorder(const binary_tree_t *tre, void (*func)(int))
{
	if (tre == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tre->left, func);
		func(tre->n);
		binary_tree_inorder(tre->right, func);
	}
}
