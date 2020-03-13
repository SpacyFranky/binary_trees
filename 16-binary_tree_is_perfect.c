#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: a pointer to the parent node of the node.
 * Return: the full of the tree 1 or 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right == NULL) ||
	    (tree->left != NULL && tree->right != NULL))
		i = binary_tree_is_full(tree->left) + binary_tree_is_full(tree->right);
	else
		i = 1;
	if (i == 1)
		return (0);
	return (1);
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0.
 *         If tree is perfect, return 1 otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
		return (1);
	else
		return (0);
}
