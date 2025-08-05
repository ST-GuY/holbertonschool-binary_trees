#include "binary_trees.h"
/**
 * binary_tree_uncle - Trouve l’oncle d’un nœud dans un arbre binaire.
 * @node: Pointeur vers le nœud dont on veut trouver l’oncle.
 *
 * Return: Pointeur vers le nœud oncle, ou NULL si aucun oncle n’existe
 *         ou si node/parent/grand-parent est NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Déclaration d’un pointeur vers le grand-parent */
	binary_tree_t *grand_parent;

	/* Si le nœud est NULL, retourner NULL */
	if (node == NULL)
		return (NULL);

	/* Si le nœud n’a pas de parent, retourner NULL */
	if (node->parent == NULL)
		return (NULL);

	/* Si le parent n’a pas de parent (grand-parent), retourner NULL */
	if (node->parent->parent == NULL)
		return (NULL);

	/* Stocker le grand-parent du nœud */
	grand_parent = node->parent->parent;

	/* Si le parent est l’enfant gauche du grand-parent */
	if (node->parent == grand_parent->left)
		/* Retourner l’enfant droit du grand-parent (l’oncle) */
		return (grand_parent->right);

	/* Si le parent est l’enfant droit du grand-parent */
	else if (node->parent == grand_parent->right)
		/* Retourner l’enfant gauche du grand-parent (l’oncle) */
		return (grand_parent->left);

	/* Si aucune des conditions n’est remplie, retourner NULL */
	return (NULL);
}
