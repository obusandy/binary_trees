#include "binary_trees.h"

/**
 * binary_tree_size -  a function that measures the size of a binary tree
 * @tre: is a pointer to the root node of the tree to measure the size to
 *
 * Return: The size or 0 if tree is Null.
 */
size_t binary_tree_size(const binary_tree_t *tre)
{
	size_t size = 0;

	if (tre)
	{
		size += 1;
		size += binary_tree_size(tre->left);
		size += binary_tree_size(tre->right);
	}
	return (size);
}
