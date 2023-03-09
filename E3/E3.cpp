/*
## E3 : Conteneurs et polymorphisme
 - Même si les conteneurs contiennent des objets par valeur (copies d'objets), on souhaite parfois stocker des pointeurs afin de pouvoir faire référence à des objets à partir d'une hiérarchie et ainsi tirer parti du comportement polymorphe des classes représentées.
 - Créer une classe Shape. La rendre abstraite en ajoutant la fonction virtual void draw () = 0; Noter que le "= 0" oblige à implémenter draw () pour toutes les classes héritant de Shape. Ajouter également un destructeur virtuel virtual ~ Shape () {};
 - Créer trois classes dérivées Circle, Square et Triangle qui override la fonction virtuelle draw() et affichent un message spécifique dans celle-ci. Ajouter également des destructeurs pour chacun d’eux qui impriment un message
 - Définir 2 typedef: typedef std::vector<Shape*>Container; et typedef Container::iterator Iter;
 - Dans main(), créer un conteneur, utilisez la fonction push_back pour ajouter un new Circle, new Square et un new Triangle
 - Utiliser une boucle for avec le type défini Iter i qui va de begin() à end() et appeler la fonction draw avec la syntaxe: (*i)->draw();
 - Utiliser une autre boucle for pour appeler delete sur chacun d'eux
 - Bonus: remplacer le conteneur par une liste au lieu d'un vecteur et vérifier que le résultat est identique (quelle que soit la structure interne du conteneur, celui-ci doit se comporter de manière identique)
*/
#include <iostream>

int main()
{
	return 0;
}