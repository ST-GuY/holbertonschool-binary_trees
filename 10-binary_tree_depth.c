#include "binary_trees.h"

/**
 * binary_tree_depth - Mesure la profondeur d’un nœud dans un arbre binaire.
 * @tree: Pointeur vers le nœud dont on veut mesurer la profondeur.
 *
 * Return: Profondeur du nœud. 0 si tree est NULL ou si c’est la racine.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0); /* Si le nœud est NULL, on retourne 0 */

	if (tree->parent == NULL)
		return (0); /* Si le nœud est la racine, profondeur = 0 */

	/* Appel récursif pour remonter vers le parent et compter */
	depth = binary_tree_depth(tree->parent);

	/* On ajoute 1 à chaque montée */
	return (1 + depth);
}
