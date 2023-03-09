/*
## E7 : Utiliser function lambda
 - Créer un  vector<int>  avec les valeurs suivantes: 4, 1, 3, 5, 2, 3, 1, 7
 - Créer une fonction  printVector(<vector<int> v) qui affiche toutes les valeurs du vecteur à l'aide d’une lambda et de for_each
 - Maintenant, créer les lambdas suivantes:
   - Rechercher le premier nombre supérieur à 4:  find_if(v.begin(), v.end(), [](int i) { ... });
   - Trier le vecteur par ordre décroissant: sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool { ... });
   - Compter les nombres supérieurs ou égaux à 5: count_if(v.begin(), v.end(), [](int a) { ... });
   - Supprimer les éléments en double qui sont côte à côte (déjà effectué par le tri): unique(v.begin(), v.end(), [](int a, int b) { ... });
   - Redimensionner le vecteur (utiliser le précédent résultat) resize(distance(v.begin(), p))
   - Calculer factorielle de 10 en utilisant un nouveau tableau contenant des données de 1 à 10: accumulate(arr, arr + 10, 1, [](int i, int j) { ... });
 - On peut aussi accéder à une lambda en la stockant dans une variable
*/
#include <iostream>


int main()
{
	return 0;
}
