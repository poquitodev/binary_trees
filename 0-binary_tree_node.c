#include "binary_trees.h"

/**
 * binary_tree_node - Create binary tree node.
 * @parent: the node to create parent pointer.
 * @value: new node value.
 *
 * Return: NULL incase of error
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
