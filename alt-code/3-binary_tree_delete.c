#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: a pointer to the root node of the tree to delete..
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		free(tree->right);
		free(tree->left);
		free(tree);
	}
}
