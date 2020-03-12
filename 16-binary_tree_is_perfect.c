#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_perfect - function that measures the height of a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the height of the tree or 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int i = 0;
	if (tree == NULL)
		return (0);

	if (!tree)
		return (0);
	if ((tree->left == NULL && tree->right == NULL) ||
	    (tree->left != NULL && tree->right != NULL))
		i = binary_tree_is_perfect(tree->left) + binary_tree_is_perfect(tree->right);
	else
		i = 1;
	if (i == 1){
		return (0);}
	return (1);
}
