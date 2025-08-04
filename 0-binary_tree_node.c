#include "binary_trees.h"

/**
 * binary_tree_node - Crée un nouveau nœud d’arbre binaire
 * @parent: Pointeur vers le parent du nouveau nœud
 * @value: Valeur à stocker dans le nouveau nœud
 *
 * Return: Pointeur vers le nouveau nœud créé, ou NULL en cas d’échec
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	/* Déclaration d’un pointeur pour le nouveau nœud */

	new_node = malloc(sizeof(binary_tree_t));
	/* Allocation mémoire pour le nœud */

	if (new_node == NULL) /* Vérification de l’échec de l’allocation */
		return (NULL);

	new_node->n = value;         /* Affectation de la valeur au nœud */
	new_node->parent = parent;   /* Définition du parent du nœud */
	new_node->left = NULL;       /* Initialisation du pointeur gauche à NULL */
	new_node->right = NULL;      /* Initialisation du pointeur droit à NULL */

	return (new_node); /* Retourne l’adresse du nouveau nœud */
}
