/*
## G1 : Quelques design patterns
- Créer une classe TransportFactory en utilisant le DesignPattern Singleton
- Créer une classe Transport et 3 classes filles Voiture, Camion, Avion contenant une méthode print affichant leur nom de classe
- Ajouter une méthode dans TransportFactory create( std::string ) créant un Transport du bon type en fonction du nom passé en paramètre et retournant un shared_ptr sur ce dernier
- Stocker les Transports générés dans la Factory et les détruire à la destruction
- Faire une boucle qui lit l’entrée std::cin, génère des objets en fonction de la saisie utilisateur et ferme l’application lors de la saisie ‘exit’
- Bonus : Faire en sorte que les classes filles s’enregistrent automatiquement dans la Factory
*/

#include <vector>
#include <iostream>

int main()
{
	return 0;
}
