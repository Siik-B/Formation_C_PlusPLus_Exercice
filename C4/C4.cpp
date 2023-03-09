/*
## C4 : Utiliser unique_ptr
 - Modifier la classe Tree pour contenir une string et imprimer un message avec la string dans le constructeur (paramétrée avec la chaîne) et le destructeur.
 - Mettre à jour sa fonction print() pour utiliser cette string également
 - Ajouter une nouvelle fonction fictive void someMethod (Tree * iTree) {};
 - Créer une fonction void testUniquePtr () contenant les éléments suivants:
 - Créer un unique_ptr ptr1 sur une nouvelle instance de la classe et appeler la fonction print a partir de ptr1
 - Appeler la someMethod avec le ptr1 (utiliser ptr1.get ())
 - Déplacer la propriété de ptr1 vers un nouveau unique_ptr ptr2 à l'aide de std::move (ptr1). ptr1 est maintenant vide.
 - Utiliser la méthode reset de ptr1 pour lui affecter un nouveau pointeur.
 - Utiliser la méthode reset de ptr2 pour lui affecter un nouveau pointeur. Le premier objet sera supprimé puisqu'il n'a plus de référence.
 - Utiliser la méthode reset de ptr1 sans paramètre pour le vider. Le deuxième objet sera supprimé.
 - À la fin de la fonction, le troisième objet sera également supprimé
 - Mettre à jour growTree () pour renvoyer un unique_ptr
 - Que se passe-t-il en utilisant std::move ?
 - Bonus:
    - Allouer dynamiquement un tableau d'arbre en utilisant new[]
    - Implémenter et appeler une fonction printForest() qui appelle print() pour chaque arbre de la forêt. Il prend un pointeur de forêt comme argument
    - Quand  utiliser le mot clé delete[] ?
    - Rendre l'utilisation de cette fonction plus sûre en stockant la forêt dans un unique_ptr
*/

#include "tree.h"

int main()
{
	return 0;
}