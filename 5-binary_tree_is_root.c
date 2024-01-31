#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a given node is a root.
 * @nod: A pointer to the node to be check.
 *
 * Return: the function must return 1 if node is a root, otherwise 0
 *         Otherwise - NULL.
 */
int binary_tree_is_root(const binary_tree_t *nod)
{
	if (nod == NULL || nod->parent != NULL)
		return (0);

	return (1);
}
