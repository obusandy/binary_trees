#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *nod);
size_t depth(const binary_tree_t *tre);
const binary_tree_t *get_leaf(const binary_tree_t *tre);
int is_perfect_recursive(const binary_tree_t *tre,
						 size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tre);

/**
 * is_leaf - Checks whether a node is a leaf of the binary tree.
 * @nod: pointer to the node to check.
 *
 * Return: If node is a leaf, 1, otherwise, 0.
 */
unsigned char is_leaf(const binary_tree_t *nod)
{
	return ((nod->left == NULL && nod->right == NULL) ? 1 : 0);
}

/**
 * depth - Returns the depth of given
 *         node in a binary tree.
 * @tre: pointer  starting point
 * you want to find.
 *
 * Return: The depth of node.
 */
size_t depth(const binary_tree_t *tre)
{
	return (tre->parent != NULL ? 1 + depth(tre->parent) : 0);
}

/**
 * get_leaf - Returns leaf of a binary tree.
 * @tre:  starting point
 * Return: pointer to the first encountered leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tre)
{
	if (is_leaf(tre) == 1)
		return (tre);
	return (tre->left ? get_leaf(tre->left) : get_leaf(tre->right));
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively.
 * @tre:  starting point
 * @leaf_depth: The depth of one leaf in the binary tree.
 * @level: level of the given node.
 *
 * Return: If the tree is perfect, 1, otherwise 0.
 */
int is_perfect_recursive(const binary_tree_t *tre,
						 size_t leaf_depth, size_t level)
{
	if (is_leaf(tre))
		return (level == leaf_depth ? 1 : 0);
	if (tre->left == NULL || tre->right == NULL)
		return (0);
	return (is_perfect_recursive(tre->left, leaf_depth, level + 1) &&
			is_perfect_recursive(tre->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tre:  starting point.
 *
 * Return: If tree is NULL or not perfect, 0.
 *         Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tre)
{
	if (tre == NULL)
		return (0);
	return (is_perfect_recursive(tre, depth(get_leaf(tre)), 0));
}
