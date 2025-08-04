#include "binary_trees.h"
/**
 * binary_tree_is_root - Vérifie si un nœud est la racine de l’arbre
 * @node: pointeur vers le nœud à vérifier
 *
 * Return: 1 si le nœud est une racine (pas de parent), 0 sinon
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Vérifie si le pointeur vers le nœud est NULL */
	if (node == NULL)
	{
		/* Si le nœud est NULL, il ne peut pas être une racine */
		return (0);
	}

	/* Vérifie si le nœud n’a pas de parent */
	if (node->parent == NULL)
	{
		/* Si le nœud n’a pas de parent, c’est la racine de l’arbre */
		return (1);
	}

	/* Si le nœud a un parent, ce n’est pas une racine */
	return (0);
}
