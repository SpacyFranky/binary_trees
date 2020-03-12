#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the depth of the tree or 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	while (tree)
	{
		tree = tree->parent;
		i++;
	}
	return (i - 1);
}
