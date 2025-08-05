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
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
    /* Si l'arbre est vide (NULL), la hauteur est 0 */

	left_height = binary_tree_height(tree->left);
    /* Calcul récursif de la hauteur du sous-arbre gauche */

	right_height = binary_tree_height(tree->right);
    /* Calcul récursif de la hauteur du sous-arbre droit */

		if (left_height > right_height)
	{
		return (left_height + 1);
		/* Si le sous-arbre gauche est plus haut, */
		/* on retourne sa hauteur + 1 (pour le nœud courant) */
	}
	else
	{
		return (right_height + 1);
		/* Sinon, le sous-arbre droit est plus haut (ou égal), */
		/* on retourne sa hauteur + 1 */
	}
}
