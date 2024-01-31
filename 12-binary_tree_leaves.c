#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in
 * a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leavesf.
 *
 * Return: number of leaves in the tree A NULL pointer is not a leaf.
 */
size_t binary_tree_leaves(const binary_tree_t *tre)
{
	size_t leves = 0;

	if (tre)
	{
		leves += (!tre->left && !tre->right) ? 1 : 0;
		leves += binary_tree_leaves(tre->left);
		leves += binary_tree_leaves(tre->right);
	}
	return (leves);
}
