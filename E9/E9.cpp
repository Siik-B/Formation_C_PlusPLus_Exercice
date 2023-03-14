#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <numeric>
#include <algorithm>

enum Country
{
	France = 0,
	Spain,
	Germany
};
std::map< Country, std::string > country_to_string = { {France,"France"}, {Spain,"Spain"}, {Germany,"Germany"} };

class Town
{
public:
	Town(std::string name, Country country, unsigned int population) : _name(name), _country(country), _population(population) {}

	explicit operator std::string() const
	{
		return _name + " [" + country_to_string[_country] + "] : " + std::to_string(_population);
	}

	unsigned int population() const { return _population; }
	Country country() const { return _country; }

protected:
	std::string _name;
	unsigned int _population;
	Country _country;
};

std::vector< Town > create_towns()
{
	std::vector< Town > towns;
	towns.push_back(Town("Paris", France, 2187526));
	towns.push_back(Town("Marseille", France, 861635));
	towns.push_back(Town("Lyon", France, 513275));
	towns.push_back(Town("Bordeau", France, 249712));
	towns.push_back(Town("Madrid", Spain, 3266126));
	towns.push_back(Town("Barcelone", Spain, 1636762));
	towns.push_back(Town("Berlin", Germany, 3748148));
	towns.push_back(Town("Munich", Germany, 1552762));
	return towns;
}

template <typename C>
std::string towns_to_string(const C& v)
{
	std::string result = "";
	for (auto it = v.cbegin(); it != v.cend(); it++)
	{
		result += static_cast<std::string>(*it) + "\n";
	}
	return result;
}

void sort_by_population(std::vector< Town >& v)
{
	for (int i = v.size(); i > 1; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (v[j].population() < v[j + 1].population())
			{
				// Swap
				Town t = std::move(v[j]);
				v[j] = std::move(v[j + 1]);
				v[j + 1] = std::move(t);
			}
		}
	}
}

std::list<Town> extract_towns_from_country(std::vector< Town >& v, const Country& c)
{
	std::list<Town> result;
	std::vector< Town >::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		if (it->country() == c)
		{
			result.emplace_back(std::move(*it));
			v.erase(it); // erase invalidate the iterator
			it = v.begin(); // return to the beginning
		}
	}
	
	return result;
}

int main()
{
	std::vector< Town > towns = create_towns();
	std::cout << towns_to_string(towns);

	std::cout << std::endl << "Sort vector by population" << std::endl;
	sort_by_population(towns);
	std::cout << towns_to_string(towns);

	std::cout << std::endl << "Take town from France" << std::endl;
	std::list<Town> listFrance = extract_towns_from_country(towns, France);
	std::cout << towns_to_string(listFrance);

	std::cout << std::endl << "Take town from Germany" << std::endl;
	std::list<Town> listGermany = extract_towns_from_country(towns, Germany);
	std::cout << towns_to_string(listGermany);

	std::cout << std::endl << "Remaining towns" << std::endl;
	std::cout << towns_to_string(towns);

	return 0;
}