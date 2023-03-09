/*
## C5 : Utiliser shared_ptr
 - Créer une fonction void testSharedPtr () contenant les éléments suivants (elle utilisera le même class Tree que le premier exemple avec unique_ptr):
   - Utiliser make_shared <Tree> (...) pour créer un nouveau shared_ptr appelé ptr sur un premier objet
   - Appeler print () et someMethod () avec le ptr
   - Créer un autre shared_ptr <Tree> appelé anotherPtr égal à ptr. Maintenant les deux pointent vers le premier objet
   - Utiliser la fonction reset de ptr pour l'affecter à une autre instance de Tree. Le premier objet ne sera pas supprimé à ce stade car anotherPtr le contient toujours
- Utiliser la fonction reset de anotherPtr sans argument, personne ne fait référence au premier objet, il sera supprimé
À la fin de testSharedPtr (), le deuxième objet sera supprimé car le dernier shared_ptr sortira du scope
*/
#include "tree.h"

#include <iostream>
#include <memory>

std::ostream& operator<< (std::ostream& stream, const Tree& tree)
{
	tree.print(stream);
	return stream;
}

void someMethod(Tree* iTree)
{
	std::cout << __func__ << std::endl;
}

int main()
{

}
