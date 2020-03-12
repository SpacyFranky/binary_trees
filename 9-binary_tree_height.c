#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the height of the tree or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		i = binary_tree_height(tree->left) + 1;
		j = binary_tree_height(tree->right) + 1;
	}
	if (i < j)
		return (j);
	return (i);
}
