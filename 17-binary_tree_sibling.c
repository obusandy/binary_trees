#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds sibling of a
 *                       node in a binary tree.
 * @nod: A pointer to the node to find the sibling of.
 * looks for the node's parent, who's the main key to
 * finding siblings.
 * Return: If node is NULL or else there is no sibling - NULL.
 *         else - pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *nod)
{
	if (nod == NULL || nod->parent == NULL)
	{
		return (NULL);
	}
	if (nod->parent->left == nod)
		return (nod->parent->right);
	return (nod->parent->left);
}
