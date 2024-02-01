#include "binary_trees.h"

/**
 * binary_tree_insert_right - function inserts a node
 * as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	temp = binary_tree_node(parent, value);
	if (temp == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		temp->right = parent->right;
		parent->right->parent = temp;
	}
	parent->right = temp;

	return (temp);
}
