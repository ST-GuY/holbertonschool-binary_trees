#include "binary_trees.h"

/**
 * binary_tree_preorder - Parcourt un arbre binaire en ordre préalable
 * @tree: Pointeur vers le nœud racine de l'arbre à parcourir
 * @func: Pointeur vers une fonction à appeler pour chaque valeur de nœud
 *
 * Description: Pour chaque nœud, la fonction applique `func` sur sa valeur,
 * puis appelle récursivement la fonction sur son enfant gauche puis droit.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Vérifie si l'arbre ou la fonction est NULL */
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* Applique la fonction à la valeur du nœud courant */
	func(tree->n);

	/* Parcours récursif du sous-arbre gauche */
	binary_tree_preorder(tree->left, func);

	/* Parcours récursif du sous-arbre droit */
	binary_tree_preorder(tree->right, func);
}
