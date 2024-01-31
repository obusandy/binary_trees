#include "binary_trees.h"

/**
 * count_nodes - a function that counts the total no.
 * of nodes in the tree
 * @tre: the tree to count nodes
 *
 * Return: returns the no. of nodes in the tree
 * or Null
 */
int count_nodes(const binary_tree_t *tre)
{
	if (tre == NULL)
		return (0);

	return (1 + count_nodes(tre->left) + count_nodes(tre->right));
}

/**
 * check_complete - checks if  the tree is complete recursively
 * @tre: check tree
 * @index: the index of the present node
 * @nodes: the total no. of nodes in the tree
 *
 * Return: returns 1 if tree is complete
 * else 0
 */
int check_complete(const binary_tree_t *tre, int index, int nodes)
{
	if (tre == NULL)
		return (1);

	if (index >= nodes)
		return (0);

	return (check_complete(tre->left, 2 * index + 1, nodes) &&
			check_complete(tre->right, 2 * index + 2, nodes));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tre: starting point
 *
 * Return: returns 1 if binary tree is
 * complete, else 0
 */
int binary_tree_is_complete(const binary_tree_t *tre)
{
	int num_nodes, index = 0;

	if (tre == NULL)
		return (0);

	num_nodes = count_nodes(tre);

	if (check_complete(tre, index, num_nodes))
		return (1);

	return (0);
}
