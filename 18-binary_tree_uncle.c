#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds uncle of a node
 *                     in a binary tree.
 * An uncle is a node's parent's sibling,
 * @nod: A pointer to node to find the uncle of.
 *  If the parent is the right child,
 * it returns the grandparent's left child as the uncle
 * Return: If node is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *nod)
{
	if (nod == NULL ||
		nod->parent == NULL ||
		nod->parent->parent == NULL)
		return (NULL);
	if (nod->parent->parent->left == nod->parent)
		return (nod->parent->parent->right);
	return (nod->parent->parent->left);
}
