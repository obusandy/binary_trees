#include "binary_trees.h"

/**
 * binary_tree_balance -a function that measures
 * the balance factor of a binary tree
 * @tre: a pointer to the root node of the
 * tree to measure the balance factor
 * Return: Incase tree is NULL, 0, else balance factor.
 */
int binary_tree_balance(const binary_tree_t *tre)
{
	if (tre)
		return (binary_tree_height(tre->left) - binary_tree_height(tre->right));

	return (0);
}

/**
 * binary_tree_height - Measure of the height of a binary tree.
 * @tre: pointer to the root node of the tree for measureing the height.
 *
 * Return: whether tree is NULL, your function must return 0,
 * else height.
 */
size_t binary_tree_height(const binary_tree_t *tre)
{
	if (tre)
	{
		size_t l = 0, r = 0;

		l = tre->left ? 1 + binary_tree_height(tre->left) : 1;
		r = tre->right ? 1 + binary_tree_height(tre->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
