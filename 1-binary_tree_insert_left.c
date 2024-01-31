#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as a left-child of
 *                           ano other in a binary tree.
 * @prnt: shows the node where the left child should be inserted.
 *the parent where the node should be
 * @val: The value contained in the new node.
 *this will grow to a new branch
 * Return: whether parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description:  The new node is connected as the new left child of the parent node,
 * creating a much stronger and more expanse tree structure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *prnt, int val)
{
	binary_tree_t *nw;

	if (prnt == NULL)
		return (NULL);

	nw = binary_tree_node(prnt, val);
	if (nw == NULL)
		return (NULL);

	if (prnt->left != NULL)
	{
		nw->left = prnt->left;
		prnt->left->parent = nw;
	}
	prnt->left = nw;

	return (nw);
}
