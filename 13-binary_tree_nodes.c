#include "binary_trees.h"

/**
 * binary_tree_nodes -  a function that counts the nodes
 * with at least 1 child
 * in a binary tree
 * @tre: starting point
 *
 * Return: Incase tree is NULL, the function must return 0,
 * A NULL pointer is not a node.
 */
size_t binary_tree_nodes(const binary_tree_t *tre)
{
	size_t nod = 0;

	if (tre)
	{
		nod += (tre->left || tre->right) ? 1 : 0;
		nod += binary_tree_nodes(tre->left);
		nod += binary_tree_nodes(tre->right);
	}
	return (nod);
}
