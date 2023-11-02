#include "binary_trees.h"

/**
 * binary_tree_leaves -  Function that Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: If tree is NULL, return 0 else return number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_size = 0;

	if (tree)
	{
		leaves_size += (!tree->left && !tree->right) ? 1 : 0;
		leaves_size += binary_tree_leaves(tree->left);
		leaves_size += binary_tree_leaves(tree->right);
	}
	return (leaves_size);
}
