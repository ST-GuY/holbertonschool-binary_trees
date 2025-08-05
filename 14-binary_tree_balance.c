#include "binary_trees.h"

/**
 * binary_tree_height - Calcule la hauteur d'un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre
 *
 * Return: Hauteur de l'arbre. Si tree est NULL, retourne 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

    /* Si le nœud est NULL, la hauteur est 0 */
	if (tree == NULL)
		return (0);

    /* Calcul récursif de la hauteur du sous-arbre gauche */
	left_height = binary_tree_height(tree->left);

    /* Calcul récursif de la hauteur du sous-arbre droit */
	right_height = binary_tree_height(tree->right);

    /* Retourne la hauteur maximale entre gauche */
	/* et droite + 1 pour le nœud courant */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - Calcule le facteur d'équilibre d'un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre
 *
 * Return: Facteur d'équilibre (hauteur gauche - hauteur droite).
 *         Si tree est NULL, retourne 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

    /* Si l'arbre est NULL, le facteur d'équilibre est 0 */
	if (tree == NULL)
		return (0);

    /* Calcul de la hauteur du sous-arbre gauche */
	left_height = binary_tree_height(tree->left);

    /* Calcul de la hauteur du sous-arbre droit */
	right_height = binary_tree_height(tree->right);

    /* Calcul et retour du facteur d'équilibre (gauche - droite) */
	return (left_height - right_height);
}
