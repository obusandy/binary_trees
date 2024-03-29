#include "binary_trees.h"

/**
 * binary_tree_delete - function that Deletes binary tree.
 * @tre: A pointr to root node of the tree to be delete.d
 */
void binary_tree_delete(binary_tree_t *tre)
{
	if (tre != NULL)
	{
		binary_tree_delete(tre->left);
		binary_tree_delete(tre->right);
		free(tre);
	}
}
