#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insterts a node as the left-child of another
 * @parent: the node to insert the left-child
 * @value: value of the new node to be inserted
 * Return: pointer of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!parent || !node)
		return (NULL);
	
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
