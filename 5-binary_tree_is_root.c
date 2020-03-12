#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: a pointer to the parent node of the node.
 * Return: 1 or 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);

}
