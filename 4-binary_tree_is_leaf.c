#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Vérifie si un nœud est une feuille
 * @node: pointeur vers le nœud à vérifier
 *
 * Return: 1 si le nœud est une feuille (aucun enfant gauche ni droit),
 *         0 sinon. Retourne également 0 si le nœud est NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Vérifie si le nœud est NULL, si oui, retourne 0 (pas une feuille) */
	if (node == NULL)
		return (0);

    /* Vérifie que le nœud n'a pas d'enfant gauche ET pas d'enfant droit */
	if (node->left == NULL && node->right == NULL)
		return (1); /* C'est une feuille, retourne 1 */

	return (0); /* Sinon, ce n'est pas une feuille, retourne 0 */
}
