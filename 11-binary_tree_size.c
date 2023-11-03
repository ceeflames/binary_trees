#include "binary_trees.h"

/**
 * find_tree_size - function that measures the size of a node
 * in a binary tree
 * @tree: pointer to the node to measure the size
 * Return: size of tree
 */
size_t find_tree_size(const binary_tree_t *tree)
{
	size_t first_size = 0, second_size = 0;

	if (tree)
	{
		first_size = tree->left ? 1 + find_tree_size(tree->left) : 0;
		second_size = tree->right ? 1 + find_tree_size(tree->right) : 0;
	}
	return (first_size + second_size);
}

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree ? find_tree_size(tree) + 1 : 0);
}
