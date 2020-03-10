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
	binary_tree_t *newnode, *newnode2;

	newnode = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	if (parent->left != NULL)
	{
		newnode2 = malloc(sizeof(binary_tree_t));
		if (newnode2 == NULL)
			return (NULL);
		newnode2 = parent->right;
		newnode2->parent = newnode;
		parent->right = newnode;
		newnode->right = newnode2;
	}
	else
	{
		parent->right = newnode;
	}
	return (newnode);
}
