#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *.
 * Return: If tree or func is NULL, do nothing.
 */` void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_t *queue[1000];
	int front = 0, rear = 0;

	queue[rear] = (binary_tree_t *)tree;
	rear++;

	while (front < rear)
	{
		binary_tree_t *current = queue[front];
		front++;

		func(current->n);

		if (current->left)
		{
			queue[rear] = current->left;
			rear++;
		}
		if (current->right)
		{
			queue[rear] = current->right;
			rear++;
		}
	}
}
