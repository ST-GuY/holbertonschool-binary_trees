#include "binary_trees.h"

/**
 * binary_tree_delete - Supprime un arbre binaire entier
 * @tree: Pointeur vers la racine de l'arbre à supprimer
 *
 * Description: Cette fonction supprime récursivement tous les nœuds
 * de l'arbre binaire en commençant par les sous-arbres gauche et droit,
 * puis libère la mémoire allouée à chaque nœud.
 * Si le pointeur tree est NULL, la fonction ne fait rien.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    /* Vérifie si l'arbre est NULL (cas de base de la récursion) */
	if (tree == NULL)
		return;

    /* Supprime récursivement le sous-arbre gauche */
	binary_tree_delete(tree->left);

    /* Supprime récursivement le sous-arbre droit */
	binary_tree_delete(tree->right);

    /* Libère la mémoire du nœud courant */
	free(tree);
}
