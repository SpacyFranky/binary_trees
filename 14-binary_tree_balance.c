#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * heightt - function that measures the height of a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the height of the tree or 0.
 */
size_t heightt(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (tree == NULL)
		return (0);
	i = heightt(tree->left) + 1;

	j = heightt(tree->right) + 1;
	if (i < j)
		return (j);
	return (i);
}
/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the count of the node or 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (heightt(tree->left) - heightt(tree->right));
}
