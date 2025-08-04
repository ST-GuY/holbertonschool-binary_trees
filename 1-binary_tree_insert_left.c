#include "binary_trees.h"
/**
 * binary_tree_insert_left - insère un nœud à gauche d’un nœud parent
 * @parent: pointeur vers le nœud parent dans
 * lequel insérer l’enfant gauche
 * @value: valeur à stocker dans le nouveau nœud
 *
 * Return: pointeur vers le nouveau nœud, ou NULL si échec ou parent est NULL
 *
 * Description: Si le parent a déjà un enfant gauche,
 *              l’ancien enfant devient l’enfant gauche du nouveau nœud.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /* Déclaration du nouveau nœud */

	if (parent == NULL)
	{
		/* Si le parent est NULL, on ne peut pas insérer, on retourne NULL */
		return (NULL);
	}
/*Création nouveau nœud avec 'parent' comme parent et 'value' comme donnée*/
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		/* Vérifie si l'allocation a échoué */
		return (NULL);
	}

	if (parent->left != NULL)
	{
		/* Si le parent a déjà un enfant gauche,*/
		 /* on le rattache au nouveau nœud */
		new_node->left = parent->left;

		/* Mise à jour du parent de l’ancien enfant gauche */
		parent->left->parent = new_node;
	}

	/* Le nouveau nœud devient l’enfant gauche du parent */
	parent->left = new_node;

	/* On retourne le pointeur vers le nouveau nœud créé */
	return (new_node);
}
