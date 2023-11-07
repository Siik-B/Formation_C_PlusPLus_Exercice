/*
Créez un functor qui prend un entier en paramètre et qui retourne le carré de cet entier.
Créez un autre functor qui prend deux entiers en paramètre et qui retourne leur produit.
Utilisez std::transform et le functor pour appliquer une multiplication par 2 aux entiers 1 à 5 inclus, et stockez les résultats dans un vecteur.
Utilisez le functor de carré pour appliquer la transformation std::transform au vecteur créé à l'étape 3, et stockez les résultats dans un second vecteur.
Utilisez la fonction std::accumulate pour calculer la somme des carrés des produits des entiers 1 à 5 inclus.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>


void printVector(const std::vector<int>& v)
{
	std::for_each(v.begin(), v.end(), [](const int& val) { std::cout << val << ' '; });
    std::cout << std::endl;
}

int main() {

    return 0;
}
