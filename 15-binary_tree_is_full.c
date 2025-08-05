#include "binary_trees.h"

/**
 * binary_tree_is_full - Vérifie si un arbre binaire est plein
 * @tree: Pointeur vers le nœud racine de l'arbre
 *
 * Return: 1 si l'arbre est plein, 0 sinon
 *         Un arbre est plein si chaque nœud a soit 0 soit 2 enfants.
 *         Si tree est NULL, retourne 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    /* Si l'arbre est vide, ce n'est pas un arbre plein */
	if (tree == NULL)
		return (0);

    /* Si le nœud est une feuille (pas d'enfants), c'est plein */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

    /* Si le nœud a deux enfants, */
	/* on vérifie récursivement les deux sous-arbres */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    /* Si le nœud a un seul enfant, ce n'est pas un arbre plein */
	return (0);
}
