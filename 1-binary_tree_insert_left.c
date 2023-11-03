#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
	{
	return (NULL);
	}
	if (parent->left == NULL)
	{
	new->parent = parent;
	parent->left = new;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	}
	else
	{
	new->parent = parent;
	new->left = parent->left;
	new->right = NULL;
	new->n = value;
	parent->left->parent = new;
	parent->left = new;
	}
	return (new);
}


