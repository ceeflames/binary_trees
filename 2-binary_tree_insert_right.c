#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node
 * as the ight-child of another node
 * @parent: Parent is a pointer to the node to insert the right-child
 * @value: Value to store in the new node
 *
 * Return: pointer to the created node, NULL (failure)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *temp = NULL;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (!parent->right)
		parent->right = node;
	else
	{
		temp = parent->right;
		temp->parent = node;
		parent->right = node;
		node->right = temp;
	}


	return (node);
}
