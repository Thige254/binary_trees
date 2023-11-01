#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node for which to find the sibling.
 *
 * Return: A pointer to the sibling node, NULL if not found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    if (node->parent->left != NULL && node->parent->left != node)
        return (node->parent->left);

    if (node->parent->right != NULL && node->parent->right != node)
        return (node->parent->right);

    return (NULL);
}
