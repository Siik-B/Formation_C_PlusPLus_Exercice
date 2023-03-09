/*
## E8 : Utiliser function lambda avec capture
 - Créer deux vector<int> v1 et v2 avec les valeurs suivantes: {3, 1, 7, 9} et {10, 2, 7, 16, 9}
 - Créer une lambda qui accède à toutes les variables par référence et mets un int dans v1 et v2: auto pushinto = [&](int m) {...};
 - Créer une lambda qui accède à v1 en copiant et imprimant toutes ses valeurs avec une boucle for: [v1] () {{}}
 - Définir une variable int N = 5 et créer une lambda qui compare un vérifie si un int est supérieur à N en capturant N par valeur.auto upper_than_n = [N](){}
 - Rechercher le premier nombre supérieur à N avec find_if et cette lambda vector<int>::iterator q = find_if(v1.begin(), v1.end(), upper_than_n)
 - Changer la valeur de N et essayer à nouveau cette function
 - Modifier la lambda pour capturer N par référence
*/
#include <iostream>

int main()
{
	return 0;
}
