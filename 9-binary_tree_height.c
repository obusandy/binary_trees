#include "binary_trees.h"

/**
 * binary_tree_height - Measures  height of binary tree.
 * @tre: a pointer to the root node of the tree to measure the height.
 *
 * Return: tree is NULL, your function must return 0,
 * else return heightt
 */
size_t binary_tree_height(const binary_tree_t *tre)
{
	if (tre)
	{
		size_t l = 0, r = 0;

		l = tre->left ? 1 + binary_tree_height(tre->left) : 0;
		r = tre->right ? 1 + binary_tree_height(tre->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
