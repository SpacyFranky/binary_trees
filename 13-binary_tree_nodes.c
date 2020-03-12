#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the count of the node or 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		i++;
	return (i + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
