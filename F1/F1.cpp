/*
 ## F1 : Un exemple simple
 - Créer une fonction qui affiche un message
 - Appeler cette fonction dans un thread séparé
 - Lancer 50 threads, quel est le problème?
 - Trouver un moyen d'identifier chaque thread de manière unique
 - Passer des variables aux threads par: valeur, référence, pointeur
 - Bonus: Faire la fonction lancer une exception avec 10% de chance. Que se passe-t-il ?
*/
#include <iostream>
#include <ctime>

int main()
{
	std::srand(std::time(nullptr));
	
	return 0;
}
