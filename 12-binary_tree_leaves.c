#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the leaves of the tree or 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if(tree == NULL)
		return (0);
	if(tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
