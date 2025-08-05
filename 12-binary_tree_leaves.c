#include "binary_trees.h"

/**
 * binary_tree_leaves - Compte le nombre de feuilles dans un arbre binaire
 * @tree: Pointeur vers le nœud racine de l’arbre à parcourir
 *
 * Return: Nombre total de feuilles dans l’arbre
 * Une feuille est un nœud sans enfant gauche ni droit
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	/* Si l’arbre est NULL, il n’a pas de feuilles */
	if (tree == NULL)
		return (0);

	/* Si le nœud est une feuille (aucun enfant), retourner 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Appel récursif pour compter les feuilles du sous-arbre gauche */
	left_leaves = binary_tree_leaves(tree->left);

	/* Appel récursif pour compter les feuilles du sous-arbre droit */
	right_leaves = binary_tree_leaves(tree->right);

	/* Retourner la somme des feuilles gauche et droite */
	return (left_leaves + right_leaves);
}
