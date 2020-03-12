#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the parent node of the node to create.
 * @value: the value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL)
	if (parent->right != NULL)
	{
		parent->right->parent = newnode;
		newnode->right = parent->right;
		parent->right = newnode;
	}
	else
	{
		parent->right = newnode;
	}
	return (newnode);
}
