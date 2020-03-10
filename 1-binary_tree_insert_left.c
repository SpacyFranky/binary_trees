#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 * Return: a pointer to the created node, or NULL on failure
 *         or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *tmp;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	if (parent->left != NULL)
        {
		tmp = malloc(sizeof(binary_tree_t));
		if (tmp == NULL)
                        return(NULL);
		tmp = parent->left;
                newnode->parent = parent;
                parent->left = newnode;
		tmp->parent = newnode;
	}
	else
	{
		newnode->parent = parent;
		parent->left = newnode;
		newnode->left = NULL;
		newnode->right = NULL;
	}
	return (newnode);
}
