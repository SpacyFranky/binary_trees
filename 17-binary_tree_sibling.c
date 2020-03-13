#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: a pointer to the node.
 * Return: node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent_node = NULL;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	parent_node = node->parent;
	if (parent_node->left != NULL && parent_node->right != NULL)
	{
		if (parent_node->left== node)
			return (parent_node->right);
		if (parent_node->right == node)
		        return (parent_node->left);
	}
	return (0);
}
