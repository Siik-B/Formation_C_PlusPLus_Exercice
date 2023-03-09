/*
## F4 : Implementer un Pool de Threads
 - Implémenter un pool de threads pour utiliser les futures
 - Créer une classe Worker qui est la classe exécutée par les threads.
 - Son opérateur () devrait être une boucle infinie attendant des tâches (en utilisant std::condition_variable)
 - Créer une classe ThreadPool qui prend le nombre de threads à allouer.
 - Un de ses membres est un conteneur de tâches, les tâches sont des pointeurs de fonctions génériques (std::function)
 - Le constructeur doit allouer tous les workers
 - Le destructeur doit informer tous les workers d'arrêter puis les joindre
 - Coder une méthode enqueue() qui poussera une tâche donnée dans le conteneur
*/
#include <iostream>
#include <atomic>
#include <thread>
#include <list>
#include <functional>
#include <condition_variable>
#include <vector>

int main()
{
	// ThreadPool<4> tp;
	for (int i = 0; i < 1000; i++)
	{
		// tp.enqueue([i]() { std::cout << "[" << std::this_thread::get_id()  << "] Hello " << i << std::endl; });
	}

	std::this_thread::sleep_for(std::chrono::seconds(5));
	return 0;
}
