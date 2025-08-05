#include "binary_trees.h"

/**
 * binary_tree_size - Mesure la taille d’un arbre binaire
 * @tree: Pointeur vers le nœud racine de l’arbre à mesurer
 *
 * Return: Le nombre total de nœuds dans l’arbre (0 si l’arbre est NULL)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	/* Si l’arbre est vide, sa taille est 0 */
	if (tree == NULL)
		return (0);

	/* Calcul récursif de la taille du sous-arbre gauche */
	left_size = binary_tree_size(tree->left);

	/* Calcul récursif de la taille du sous-arbre droit */
	right_size = binary_tree_size(tree->right);

	/* Retourne la taille totale : 1 (nœud actuel) + gauche + droite */
	return (1 + left_size + right_size);
}
