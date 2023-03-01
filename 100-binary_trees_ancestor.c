#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (first == NULL || second == NULL)
        return NULL;

    if (first == second)
        return (binary_tree_t *)first;

    binary_tree_t *left = binary_trees_ancestor(first, second->left);
    binary_tree_t *right = binary_trees_ancestor(first, second->right);

    if (left && right)
        return (binary_tree_t *)second;

    return left ? left : right;
}