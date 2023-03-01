#include "binary_trees.h"

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    queue_t *queue = NULL;
    binary_tree_t *node;

    if (!tree || !func)
        return;

    queue = queue_create();
    if (!queue)
        return;

    queue_push(queue, (void *)tree);
    while (!queue_is_empty(queue))
    {
        node = (binary_tree_t *)queue_pop(queue);
        func(node->n);
        if (node->left)
            queue_push(queue, (void *)node->left);
        if (node->right)
            queue_push(queue, (void *)node->right);
    }

    queue_delete(queue, NULL);

    return (0);
}
