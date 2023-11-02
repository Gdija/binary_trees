#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the right-child of another node
 * @parent: the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new;

        new = malloc(sizeof(binary_tree_t));
        if (new == NULL || parent == NULL)
        {
        return(NULL);
        }
        if (parent->right == NULL)
        {
        new->parent = parent;
        parent->right=new;
        new->left=NULL;
        new->right=NULL;
        new->n = value;
        }
        else
        {
        new->parent= parent;
        new->right = parent->right;
        new->left = NULL;
        new->n = value;
        parent->right->parent = new;
        parent->right = new;
        }
        return (new);
}
