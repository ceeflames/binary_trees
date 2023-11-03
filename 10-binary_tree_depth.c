#include "binary_trees.h"

/**
 * find_tree_depth - function that measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * @num: measured tree depth
 *
 * Return: 0
 */
size_t find_tree_depth(const binary_tree_t *tree, size_t num)
{
	if (tree && !tree->parent)
		return (num);
	if (tree)
		return (find_tree_depth(tree->parent, num + 1 ));
	return (num);
}

/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (find_tree_depth(tree, 0));
}
