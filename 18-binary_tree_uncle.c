#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle node
 *
 * Return: ptr to the uncle node
 * if node is NULL, has no uncle, return NULL\/
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp = node ? node->parent : NULL;

	return (node ? temp ? binary_tree_sibling(temp) : NULL : NULL);
}
