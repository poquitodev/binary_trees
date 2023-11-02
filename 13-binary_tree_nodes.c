#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at 
 * least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_count = 0;

	if (tree)
	{
		nodes_count += (tree->left || tree->right) ? 1 : 0;
		nodes_count += binary_tree_nodes(tree->left);
		nodes_count += binary_tree_nodes(tree->right);
	}
	return (nodes_count);
}
