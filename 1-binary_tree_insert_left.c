#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 * @parent: pointer to the node to insert left-child
 * @value: value to store in the new node
 *
 * Return: pointer to the neew node, or NULL (failure)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *temp = NULL;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (!parent->left)
			parent->left = node;
		else
		{
			temp = parent->left;
			temp->parent = node;
			parent->left = node;
			node->left = temp;
		}
	}
	return (node);
}
