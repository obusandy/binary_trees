#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  a function that checks if a node is a leaf.
 * @nod: A pointer to the node to be check.
 *
 * Return: 1 if node is a leaf.
 *         Otherwise returns 0 null.
 */
int binary_tree_is_leaf(const binary_tree_t *nod)
{
	if (nod == NULL)
		return (0);

	if (nod->left == NULL && nod->right == NULL)
		return (1);

	return (0);
}
