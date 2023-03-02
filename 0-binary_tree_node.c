#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node;
 * @value: node value
 * Return: pointer of the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->value = value;
	return (node);
}
