#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tre: tree to go trough
 * Return: height
 * or 0
 */
size_t binary_tree_height(const binary_tree_t *tre)
{
	size_t l = 0;
	size_t r = 0;

	if (tre == NULL)
	{
		return (0);
	}
	else
	{
		if (tre)
		{
			l = tre->left ? 1 + binary_tree_height(tre->left) : 0;
			r = tre->right ? 1 + binary_tree_height(tre->right) : 0;
		}
		return ((l > r) ? l : r);
	}
}
/**
 * binary_tree_depth - depth of specified node from root
 * @tre: starting point
 * Return: 0 if it it is the root or
 * number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tre)
{
	return ((tre && tre->parent) ? 1 + binary_tree_depth(tre->parent) : 0);
}
/**
 * linked_node - this function makes a linked list from depth level and node
 * @head: pointer to head of linked list
 * @tre: node to store
 * @level: depth of node to store
 * Return: void(Nothing)
 */
void linked_node(link_t **head, const binary_tree_t *tre, size_t level)
{
	link_t *nw, *x;

	nw = malloc(sizeof(link_t));
	if (nw == NULL)
	{
		return;
	}
	nw->n = level;
	nw->nod = tre;
	if (*head == NULL)
	{
		nw->next = NULL;
		*head = nw;
	}
	else
	{
		x = *head;
		while (x->next != NULL)
		{
			x = x->next;
		}
		nw->next = NULL;
		x->next = nw;
	}
}
/**
 * recursion - goes through the complete tree and each of them does
 * stores each node
 * in linked_node function
 * @head: pointer to first node of linked list
 * @tre: node to check
 * Return: Null defaut
 */
void recursion(link_t **head, const binary_tree_t *tre)
{
	size_t level = 0;

	if (tre != NULL)
	{
		level = binary_tree_depth(tre);
		linked_node(head, tre, level);
		recursion(head, tre->left);
		recursion(head, tre->right);
	}
}
/**
 * binary_tree_levelorder - output for nodes element in a lever-order
 * @tre: root node
 * @func: function to use
 * Return: Null
 */
void binary_tree_levelorder(const binary_tree_t *tre, void (*func)(int))
{
	link_t *head, *x;
	size_t height = 0, cont = 0;

	if (!tre || !func)
	{
		return;
	}
	else
	{
		height = binary_tree_height(tre);
		head = NULL;
		recursion(&head, tre);
		while (cont <= height)
		{
			x = head;
			while (x != NULL)
			{
				if (cont == x->n)
				{
					func(x->node->n);
				}
				x = x->next;
			}
			cont++;
		}
		while (head != NULL)
		{
			x = head;
			head = head->next;
			fre(x);
		}
	}
}
