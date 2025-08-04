#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insère un nœud à droite d'un parent
 * @parent: Pointeur vers le nœud parent dans lequel insérer l'enfant
 * @value: Valeur à insérer dans le nouveau nœud
 *
 * Return: Pointeur vers le nouveau nœud,
 * ou NULL en cas d'échec ou si parent est NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Vérifie si le nœud parent est NULL */
	if (parent == NULL)
		return (NULL);

	/* Alloue de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialise la valeur du nœud */
	new_node->n = value;

	/* Le nouveau nœud n’a pas d’enfant gauche */
	new_node->left = NULL;

	/* Le nœud prend comme enfant droit l’ancien enfant droit du parent */
	new_node->right = parent->right;

	/* Le parent du nouveau nœud est le nœud donné */
	new_node->parent = parent;

	/* Si le parent avait déjà un enfant droit, on met à jour son parent */
	if (parent->right != NULL)
		parent->right->parent = new_node;

	/* Le parent pointe maintenant vers le nouveau nœud à droite */
	parent->right = new_node;

	/* Retourne un pointeur vers le nouveau nœud */
	return (new_node);
}
