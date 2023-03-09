/*
## C2 : Utiliser les copies constructeurs
 - Créer une classe Branch qui définit un constructeur de copie affichant uniquement un message. Créer également un constructeur par défaut (le compilateur ne l'ajoute que s'il n'y a pas du tout de constructeur)
 - Créer une classe Fruit contenant une private string, un constructeur paramétré qui prend et définit le nom du fruit et une fonction d’affichage const qui affiche le nom.
 - Créer une classe Tree avec un membre Branch et un membre Fruit. Le constructeur par défaut de Tree appelle le constructeur paramétré Fruit avec une valeur spécifique. Ajouter également une fonction d’affichage qui appelle la fonction d’affichage Fruit.
 - Dans main(), instancier un Tree avec le constructeur par défaut. Appelez sa fonction d’affichage. Puis instancier une autre instance de Tree en copiant la première instance. Appeler la fonction d’affichage sur la deuxième instance
 - Bonus: Ajouter à la classe Fruit, Fruit (const Fruit &) = delete;
*/
#include <iostream>

int main()
{
	return 0;
}
