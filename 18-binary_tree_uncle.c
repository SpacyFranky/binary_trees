#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_uncle - function that finds the sibling of a node
 *
 * @node: a pointer to the node.
 *
 * Return: node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_node = NULL, *parent_node = NULL;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	parent_node = node->parent;
	uncle_node = parent_node->parent;

	if (uncle_node->left != NULL && uncle_node->right != NULL)
	{
		if (uncle_node->left == node->parent)
			return (uncle_node->right);
		if (uncle_node->right == node->parent)
			return (uncle_node->left);
	}
	return (0);
}
