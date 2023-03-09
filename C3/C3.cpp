/*
## C3 : Utiliser allocation dynamique
 - Mettre à jour l'exercice C2
 - Ajoutez une surcharge de l’operator<<() pour afficher la hauteur de l'arbre. L’operator<<() prend en paramètre une référence sur std::ostream et une référence constante à un Tree. Il retourne une référence au même std::ostream. L'implémentation est similaire à celle utilisée avec std :: cout.
 - Implémenter un destructeur dans Tree ~Tree() qui affiche son nom
 - Créer une fonction growTree() qui retourne une instance de Tree et prend en paramètre la hauteur nécessaire
 - Dans la fonction main(), instancier des arbres et afficher leur hauteur
 - Quand utiliser le mot-clé delete?
*/
#include "tree.h"

#include <iostream>
#include <random>

// Générateur de nombre aléatoire
int generate_random()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 10);
	return dis(gen);
}

int main()
{
	
	return 0;
}