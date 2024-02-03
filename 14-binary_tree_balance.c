#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure
*
* Return: 0 if the tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t l = 0, r = 0;

		if (tree->left != NULL)
			l = 1 + binary_tree_height(tree->left);
		if (tree->right != NULL)
			r = 1 + binary_tree_height(tree->right);
		if (l > r)
			return (l);
		else
			return (r);
	}
	return (0);
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: If tree is NULL, must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
