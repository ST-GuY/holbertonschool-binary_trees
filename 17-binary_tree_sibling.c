#include "binary_trees.h"

/**
 * binary_tree_sibling - Trouve le frère ou
 * la sœur d’un nœud dans un arbre binaire.
 * @node: Pointeur vers le nœud dont on veut trouver le frère ou la sœur.
 *
 * Return: Pointeur vers le nœud frère/sœur, ou NULL si aucun n’existe,
 *         ou si node/parent est NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Si le nœud est NULL, retourner NULL */
	if (node == NULL)
		return (NULL);

	/* Si le nœud n’a pas de parent, il ne peut pas avoir de frère ou sœur */
	if (node->parent == NULL)
		return (NULL);

	/*Si le nœud est l’enfant gauche, retourner l’enfant droit (le frère) */
	if (node->parent->left == node)
		return (node->parent->right);

	/*Si le nœud est l’enfant droit, retourner l’enfant gauche (le frère) */
	if (node->parent->right == node)
		return (node->parent->left);

	/* Si le nœud n’est ni à gauche ni à droite, retourner NULL */
	return (NULL);
}
