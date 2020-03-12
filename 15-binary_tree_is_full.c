#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: a pointer to the parent node of the node.
 * Return: the full of the tree 1 or 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int x,i = 0;
	if (tree == NULL)
		return (0);
	x = tree->n;
	printf("n == %d\n",x);

	if (!tree)
		return (0);
	if ((tree->left == NULL && tree->right == NULL) || (tree->left != NULL && tree->right != NULL))
		i = binary_tree_is_full(tree->left) + binary_tree_is_full(tree->right);
	else
		i = 1;
	if (i == 1){
		return (0);}
	return (1);
}
