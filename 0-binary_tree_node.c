#include "binary_tree.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	
	return (node);
}
