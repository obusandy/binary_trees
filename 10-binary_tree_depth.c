#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node in a binary tree.
 * @tre: a pointer to the node to measure the depth
 *
 * Return: Incase treee is NULL, your function must return 0,
 * else depth.
 */
size_t binary_tree_depth(const binary_tree_t *tre)
{
	return ((tre && tre->parent) ? 1 + binary_tree_depth(tre->parent) : 0);
}
