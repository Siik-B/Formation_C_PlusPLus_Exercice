/*
Déclarez une classe template nommée Container qui encapsule un type de conteneur standard (par exemple, vector ou list).
Ajoutez une méthode nommée countDistinct qui renvoie le nombre d'éléments distincts dans le conteneur.
Utilisez le mot clé using pour créer un alias de type pour le type de conteneur encapsulé. Par exemple, si vous utilisez un vector, créez un alias de type nommé ContainerType pour std::vector<T>.
Implémentez la méthode countDistinct en utilisant des algorithmes standard de C++ pour calculer le nombre d'éléments distincts dans le conteneur encapsulé.
Écrivez une fonction main pour tester votre classe Container en créant plusieurs instances de la classe pour différents types de conteneurs standard et en appelant la méthode countDistinct.
*/
#include <iostream>
#include <vector>
#include <algorithm>

namespace Unit{
    using Distance = float;
}

// template<typename T> using MyVec = std::vector<T>; // OK
// template<typename T> typedef std::vector<T> MyVec; // NOT OK

// MyVec< int > vector;

int main() {
    std::vector<int> vec{ 1, 2, 3, 2, 1, 4, 5, 4, 6 };
    // Container<int> container(vec);

    // std::cout << "Number of distinct elements in vector: " << container.countDistinct() << std::endl;

    Unit::Distance d = 1.2f;
    float f = d;
    std::cout << f;

    return 0;
}

