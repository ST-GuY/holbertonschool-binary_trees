#include "binary_trees.h"

/**
 * binary_tree_inorder - Parcours un arbre binaire en ordre (in-order)
 * @tree: Pointeur vers le nœud racine de l'arbre à parcourir
 * @func: Pointeur vers une fonction à appeler
 * pour chaque nœud (prend un int)
 *
 * Description: Cette fonction parcourt un arbre binaire en utilisant
 * une traversée infixée (gauche, racine, droite). Pour chaque nœud,
 * elle appelle la fonction passée en paramètre avec la valeur du nœud.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Vérifie si l'arbre ou la fonction sont NULL, et ne fait rien dans ce cas */
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* Appelle récursivement la fonction sur le sous-arbre gauche */
	binary_tree_inorder(tree->left, func);

	/* Applique la fonction à la valeur du nœud courant */
	func(tree->n);

	/* Appelle récursivement la fonction sur le sous-arbre droit */
	binary_tree_inorder(tree->right, func);
}
