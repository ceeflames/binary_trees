#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t first_height = 0;
	size_t second_height = 0;

	if (tree)
	{
		first_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		second_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}
	return (first_height > second_height ? first_height : second_height);
}
