#include "binary_trees.h"
#include <stdlib.h>
/**
 * depth - function that measures the depth
 * of a node in a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the depth of the tree or 0.
 */
int depth(const binary_tree_t *tree)
{
	int i = 0;

	while (tree)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}

/**
 * perfect - checks if a binary tree is perfect
 * of a binary tree
 * @tree: a pointer to the parent node of the node.
 * @d:depth of tree.
 * @level: level of the node.
 * Return: 0 or 1.
 */
int perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return(d == level+1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (perfect(tree->left, d, level+1) &&
		perfect(tree->right, d, level+1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0.
 *         If tree is perfect, return 1 otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	d = depth(tree);
	return (perfect(tree, d, 0));
}
