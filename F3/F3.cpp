/*
## F3 : Utiliser async
 - Créer un programme qui additionnera les éléments d'un vecteur avec std::accumulate dans une tâche (async)
 - Appeler deux fois std::async (divisez le vecteur en deux)
 - Afficher la somme finale
 - Bonus: Faire le split générique par tranche de 1000 éléments
 - Bonus: Utiliser la récursivité
*/
#include <iostream>
#include <thread>
#include <vector>
#include <chrono>

int main()
{
	std::vector<int> v(100000, 1);
	auto start = std::chrono::high_resolution_clock::now();
	// std::cout << "The sum is " << parallel_sum(v.begin(), v.end()) << '\n';
	std::cout << "Duration " << std::chrono::duration_cast< std::chrono::milliseconds >( std::chrono::high_resolution_clock::now() - start ).count() << "ms" << std::endl;
}
