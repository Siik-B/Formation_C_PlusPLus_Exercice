/*
## E1 : Opérations sur les strings
 - Créer une string, afficher sa size() et sa capacity()
 - Faire quelques manipulations (en utilisant insert, append et operator<<) qui modifieront automatiquement sa capacité, afficher sa size() et sa capacity() à nouveau
 - Utiliser reserve (int) pour prédéfinir sa capacité et l'afficher
 - Créer une fonction void replaceChars (string& modifyMe, string const & findMe, string const & newChars) qui recherche findMe dans la string modifyMe et la remplace par newChars
 - Essayer avec un exemple
 - Faire une comparaison des string avec les opérateur operator ==, operator != operator >, operator <, operator >=,et operator <=.  Utiliser également la fonction compare (string)
 - Utiliser l'opérateur [] et at () pour accéder aux caractères
 - Utiliser at() avec une position non existante pour lever une exception. Utiliser try {} catch (const exception & e) {} pour voir l’exception et afficher son message
*/
#include <iostream>
#include <string>

void replaceChars(std::string& modifyMe, std::string const& findMe, std::string const& newChars)
{
	// Get the first occurrence
	size_t pos = modifyMe.find(findMe);

	// Repeat till end is reached
	while (pos != std::string::npos)
	{
		// Replace this occurrence of Sub String
		modifyMe.replace(pos, findMe.size(), newChars);
		// Get the next occurrence from the current position
		pos = modifyMe.find(findMe, pos + findMe.size());
	}
}

int main()
{
	std::string str = "Hello";

	std::cout << "str size:" << str.size() << " capacity:" << str.capacity() << std::endl;
	str.append(" ");
	str += "World ";
	std::cout << "str size:" << str.size() << " capacity:" << str.capacity() << std::endl;
	str += str;
	std::cout << "str size:" << str.size() << " capacity:" << str.capacity() << std::endl;
	str.reserve(50);
	std::cout << "str size:" << str.size() << " capacity:" << str.capacity() << std::endl;

	replaceChars(str, "World", "Space");
	std::cout << str << std::endl;
	
	std::string str1 = "AAA";
	std::string str2 = "BBB";
	if (str1 == str2)
	{
		std::cout << "==" << std::endl;
	}
	if (str1 != str2)
	{
		std::cout << "!=" << std::endl;
	}
	if (str1 > str2)
	{
		std::cout << ">" << std::endl;
	}
	if (str1 < str2)
	{
		std::cout << "<" << std::endl;
	}
	if (str1 >= str2)
	{
		std::cout << ">=" << std::endl;
	}
	if (str1 <= str2)
	{
		std::cout << "<=" << std::endl;
	}

	std::cout << str1[0] << std::endl;
	std::cout << str1.at(0) << std::endl;

	// This will crash
	//std::cout << str1[4] << std::endl;
	try
	{
		std::cout << str1.at(4) << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << "exception : " << e.what() << std::endl;
	}
	return 0;
}
