#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: ptr to the sibling node
 * if node is NULL, has no string or the parents is NULL
 * return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tp = node ? node->parent : NULL;

	return (node ? tp ? node == tp->left ? tp->right : tp->left : NULL : NULL);

}
