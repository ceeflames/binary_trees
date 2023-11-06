#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * the balance factor
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	binary_tree_t *tmp = tree ? tree->left : NULL;

	if (tree)
	{
		if (tree->left && tree->right)
			return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
		else
			return (tmp ? binary_tree_height(tree) - 0 : 0 - binary_tree_height(tree));
	}
	return (0);
}
