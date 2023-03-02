#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insterts a node as the righ-child of another
 * @parent: the node to insert the left-child
 * @value: value of the new node to be inserted
 * Return: pointer of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!parent || !node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}
