#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: a pointer to the parent node of the node.
 * Return: 1 or 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return(0);

	if (node->left == NULL && node->right == NULL)
		return(1);
	else
		return(0);

}
