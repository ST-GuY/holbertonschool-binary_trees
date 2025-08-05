#include "binary_trees.h"

/**
 * binary_tree_nodes - Compte le nombre de nœuds avec au moins un enfant
 * @tree: Pointeur vers le nœud racine de l’arbre à parcourir
 *
 * Return: Nombre total de nœuds avec au moins un enfant
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	/* Si l’arbre est vide, retourner 0 */
	if (tree == NULL)
		return (0);

	/* Appel récursif sur le sous-arbre gauche */
	left_nodes = binary_tree_nodes(tree->left);

	/* Appel récursif sur le sous-arbre droit */
	right_nodes = binary_tree_nodes(tree->right);

	/* Si le nœud courant a au moins un enfant, ajouter 1 */
	if (tree->left != NULL || tree->right != NULL)
		return (left_nodes + right_nodes + 1);

	/* Sinon, ce n’est pas un nœud parent, juste additionner les enfants */
	return (left_nodes + right_nodes);
}
