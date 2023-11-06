#include "binary_trees.h"

/**
 * _pow - prints string
 * @i: num
 * @j: power
 *
 * Return: int
 */

int _pow(int i, int j)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (i);
	return (i * _pow(i, j - 1));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_leaves(tree) == _pow(2, binary_tree_height(tree)))
		return (1);
	return (0);

}
