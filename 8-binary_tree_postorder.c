#include "binary_trees.h"
/**
 * binary_tree_postorder - Parcourt un arbre binaire en post-ordre
 * @tree: Pointeur vers la racine de l'arbre binaire
 * @func: Pointeur vers une fonction à appliquer à chaque noeud
 *
 * Description : Cette fonction parcourt récursivement un arbre binaire en
 * post-ordre (gauche, droite, racine) et applique la fonction @func à chaque
 * noeud rencontré.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Si l'arbre est vide ou la fonction est NULL, ne rien faire */
	if (tree == NULL || func == NULL)
		return;

    /* Parcours récursif du sous-arbre gauche */
	binary_tree_postorder(tree->left, func);

    /* Parcours récursif du sous-arbre droit */
	binary_tree_postorder(tree->right, func);

    /* Appliquer la fonction au noeud courant */
	func(tree->n);
}
