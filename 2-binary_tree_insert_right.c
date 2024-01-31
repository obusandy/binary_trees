#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node aa
 * as the left-child of another node
 * @prnt: parent to the node to insert the right-child in.
 * @val: The value to store in the new node.
 * Return: if the target parent node is absent, an error occurs
 * or NULL. Or else a pointer
 *
 * Description: whether parent already has a right-child, the new node
 * takes its place and the old right-child is set as
 * the right-child of the new node. thus maintaining the established
 * order of the tree.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *prnt, int val)
{
	binary_tree_t *nw;

	if (prnt == NULL)
		return (NULL);

	nw = binary_tree_node(prnt, val);
	if (nw == NULL)
		return (NULL);

	if (prnt->right != NULL)
	{
		nw->right = prnt->right;
		prnt->right->parent = nw;
	}
	prnt->right = nw;

	return (nw);
}
