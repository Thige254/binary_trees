#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two the nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor. NULL if none is found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *ptr1 = first;
	const binary_tree_t *ptr2 = second;

	if (!first || !second)
		return (NULL);

	while (ptr1)
	{
		ptr2 = second;
		while (ptr2)
		{
			if (ptr1 == ptr2)
				return ((binary_tree_t *)ptr1);
			ptr2 = ptr2->parent;
		}
		ptr1 = ptr1->parent;
	}

	return (NULL);
}
