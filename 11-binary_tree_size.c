#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: If tree is NULL, return 0 else return size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t binary_size = 0;

	if (tree)
	{
		binary_size += 1;
		binary_size += binary_tree_size(tree->left);
		binary_size += binary_tree_size(tree->right);
	}
	return (binary_size);
}
