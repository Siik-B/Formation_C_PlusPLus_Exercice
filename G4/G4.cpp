/*
Améliorer le code en utilisant la sémantique move
Essayer de ne plus avoir d’appel au constructeur ou à l’opérateur de copie
Vérifier que l'exécution est plus rapide
*/

#include <iostream>
#include <vector>
#include <chrono>

static size_t callToCopyConstructor = 0;
static size_t callToCopyOperator = 0;

class Object
{
public:
	Object() : _lotsOfData{ 1'000'000,{1'000'000} } {}
	Object(const Object& other) { _lotsOfData = other._lotsOfData; callToCopyConstructor++; }

	Object& operator=(const Object& other) { _lotsOfData = other._lotsOfData; callToCopyOperator++; return *this; }

protected:
	std::vector<std::vector<int>> _lotsOfData;
};

long long elapsed_time_ms(const std::chrono::time_point<std::chrono::high_resolution_clock>& from)
{
	return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - from).count();
}

int main()
{
	auto start = std::chrono::high_resolution_clock::now();
	Object o1 = Object();
	Object o2 = o1;
	std::cout << "Elapsed time: " << elapsed_time_ms(start) << "ms\n";
	Object o3 = Object(o2);
	std::cout << "Elapsed time: " << elapsed_time_ms(start) << "ms\n";
	Object o4;
	o4 = o3;
	std::cout << "Elapsed time: " << elapsed_time_ms(start) << "ms\n";

	std::cout << "CopyConstructor call " << callToCopyConstructor << std::endl;
	std::cout << "CopyOperator call " << callToCopyOperator << std::endl;
}
