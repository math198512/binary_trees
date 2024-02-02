#include "binary_trees.h"

/**
 *binary_tree_depth - gives the depth of a node in a binary tree
 *@tree: Pointer to the node to measure
 *
 *Return: If tree is NULL, must return 0
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree != NULL && tree->parent != NULL)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
