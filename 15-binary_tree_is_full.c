#include "binary_trees.h"

/**
 * is_full_recursive - a function that checks if a binary tree is full
 * @tre:  tree is a pointer to the root node of the tree to check
 *
 * Return: If tree is not full, 0.else , 1.
 */
int is_full_recursive(const binary_tree_t *tre)
{
	if (tre != NULL)
	{
		if ((tre->left != NULL && tre->right == NULL) ||
			(tre->left == NULL && tre->right != NULL) ||
			is_full_recursive(tre->left) == 0 ||
			is_full_recursive(tre->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tre: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is NULL or is not full - 0.else  - 1.
 */
int binary_tree_is_full(const binary_tree_t *tre)
{
	if (tre == NULL)
		return (0);
	return (is_full_recursive(tre));
}
