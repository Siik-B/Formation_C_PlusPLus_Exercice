/*
## C6 : Utiliser l'héritage simple
 - Créer une classe IntegerManager qui a un membre int privé et 3 fonctions membres:
   - read () qui retourne l'int
   - set () pour assigner l'int
   - permute () qui multiplie le membre par une constante (= 42)
 - Créer une classe DoubleIntegerManager qui hérite d’IntegerManager. Elle redéfinit le «même» int et ajoute deux nouvelles fonctions: 
   - change () qui appelle permute () de la classe de base
   - set () qui définit l’int interne et appelle le set() de la classe de base
 - Dans le main (), afficher la taille de chaque classe (en utilisant sizeof ())
 - Instancier ensuite un élément de classe fille et appeler les fonctions: change (), read (), permute () et set ()
*/

#include <iostream>

int main()
{
	return 0;
}
