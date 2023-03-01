#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node, or NULL if node has no sibling or if node or its parent are NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);
    
    if (node == node->parent->left)
        return (node->parent->right);
    else
        return (node->parent->left);

        return (0);
}