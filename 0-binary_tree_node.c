#include "binary_trees.h"

/**
 * binary_tree_node - forms a binary tree node.
 * @prnt: shows the parent of the node to be formed.
 * @val: The val to put in the new node.
 *
 * Return: whether an error occurs - NULL.
 *         or else
 *         a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *prnt, int val)
{
	binary_tree_t *nw;

	nw = malloc(sizeof(binary_tree_t));
	if (nw == NULL)
		return (NULL);

	nw->n = val;
	nw->parent = prnt;
	nw->left = NULL;
	nw->right = NULL;

	return (nw);
}
