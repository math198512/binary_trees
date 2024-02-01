#include "binary_trees.h"

/**
 * binary_tree_insert_left - function inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return NULL;
	temp = binary_tree_node(parent, value);
	if (temp == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		temp->left = parent->left;
		parent->left->parent = temp;
	}
	parent->left = temp;

	return (temp);
}
