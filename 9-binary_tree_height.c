#include "binary_trees.h"
/**
 * binary_tree_height - calcule la hauteur d'un arbre binaire
 * @tree: pointeur vers la racine de l'arbre binaire
 *
 * Retourne la hauteur de l'arbre. La hauteur est définie comme le nombre
 * d'arêtes sur le chemin le plus long entre la racine et une feuille.
 * Si l'arbre est NULL, retourne 0.
 *
 * Return: la hauteur de l'arbre (nombre d'arêtes)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
    /* Si l'arbre est vide (NULL), la hauteur est 0 */

	size_t left_height = binary_tree_height(tree->left);
    /* Calcul récursif de la hauteur du sous-arbre gauche */

	size_t right_height = binary_tree_height(tree->right);
    /* Calcul récursif de la hauteur du sous-arbre droit */

	return (1);
    /* Retourne 1 (ici il faut retourner 1 + max(left_height, right_height)) */
}
